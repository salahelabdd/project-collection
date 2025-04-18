<?php
session_start(); 

$servername = "localhost";
$username = "root";
$password = "";
$dbname = "skyline";


$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$emailError = ""; 
$passwordError = ""; 

if (isset($_SESSION['user_email'])) {
    $email = $_SESSION['user_email']; 

    $sql = "SELECT * FROM customer WHERE customeEmail = '$email'";
    $result = $conn->query($sql);

    if ($result->num_rows > 0) {
        $user = $result->fetch_assoc();
        $name = $user['customerName'];
        $phone = $user['customerPhone'];
        $email = $user['customeEmail'];
        $stored_password = $user['customerPassword']; 
    } else {
        echo "User not found!";
        exit;
    }

    if ($_SERVER['REQUEST_METHOD'] === 'POST' && isset($_POST['update_account'])) {
        $new_name = $_POST['name'] ?? $name;
        $new_phone = $_POST['phone'] ?? $phone;
        $new_email = $_POST['email'] ?? $email;
        $old_password = $_POST['old_password'] ?? ''; 
        $new_password = $_POST['password'] ?? ''; 

        if ($new_email !== $email) {
            $checkEmailSql = "SELECT * FROM customer WHERE customeEmail = '$new_email'";
            $checkResult = $conn->query($checkEmailSql);

            if ($checkResult->num_rows > 0) {
                $emailError = "This email is already registered. Please choose a different email.";
            }
        }

        if (empty($emailError) && $old_password !== $stored_password) {
            $passwordError = "The old password you entered is incorrect.";
        }

        if (empty($emailError) && empty($passwordError)) {
            if (!empty($new_password)) {
                $updateSql = "UPDATE customer SET customerName = '$new_name', customerPhone = '$new_phone', customeEmail = '$new_email', customerPassword = '$new_password' WHERE customeEmail = '$email'";
            } else {
                $updateSql = "UPDATE customer SET customerName = '$new_name', customerPhone = '$new_phone', customeEmail = '$new_email' WHERE customeEmail = '$email'";
            }

            if ($conn->query($updateSql) === TRUE) {
                $_SESSION['user_email'] = $new_email; 
                echo "<script>alert('Account updated successfully!');</script>";
                header("Location: project.html");
                exit;
            } else {
                echo "Error updating record: " . $conn->error;
            }
        }
    }

    if ($_SERVER['REQUEST_METHOD'] === 'POST' && isset($_POST['delete_account'])) {
        $deleteSql = "DELETE FROM customer WHERE customeEmail = '$email'";

        if ($conn->query($deleteSql) === TRUE) {
            session_destroy(); // End the session
            echo "<script>alert('Account deleted successfully.');</script>";
            header("Location: index.html");
            exit;
        } else {
            echo "Error deleting account: " . $conn->error;
        }
    }
} else {
    echo "You must be logged in to edit your account.";
    exit;
}

$conn->close();
?>


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Edit Account</title>
    <style>
        body {
            font-family: 'Arial', sans-serif;
            background-color: #e8f4f8;
            color: #333;
            margin: 0;
            padding: 0;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
        }

        .container {
            width: 100%;
            max-width: 600px;
            padding: 30px;
            margin-top: 200px;
            background-color: #ffffff;
            border-radius: 12px;
            box-shadow: 0 10px 20px rgba(0, 0, 0, 0.1);
        }

        h1 {
            font-size: 32px;
            color: #2c3e50;
            text-align: center;
            margin-bottom: 30px;
        }

        form {
            display: flex;
            flex-direction: column;
            gap: 20px;
        }

        label {
            font-size: 16px;
            color: #2c3e50;
            margin-bottom: 5px;
        }

        input[type="text"], input[type="email"], input[type="password"] {
            width: 100%;
            padding: 15px;
            font-size: 16px;
            border: 2px solid #ccc;
            border-radius: 8px;
            outline: none;
            transition: border-color 0.3s ease;
            box-sizing: border-box;
        }

        input[type="text"]:focus, input[type="email"]:focus, input[type="password"]:focus {
            border-color: #00152b;
            box-shadow: 0 0 8px rgba(52, 152, 219, 0.5);
        }

        .error {
            color: red;
            font-size: 14px;
        }

        button {
            padding: 15px;
            font-size: 18px;
            background-color: #00152b;
            color: white;
            border: none;
            border-radius: 8px;
            cursor: pointer;
            transition: background-color 0.3s;
            width: 100%;
        }

        button:hover {
            background-color: #009688;
        }

        .delete-button {
            background-color:rgb(128, 13, 0);
        }

        .delete-button:hover {
            background-color: #c0392b;
        }

        .back-link {
            display: block;
            margin-top: 20px;
            font-size: 16px;
            color: #00152b;
            text-align: center;
            text-decoration: none;
        }

        .back-link:hover {
            text-decoration: underline;
        }

        @media (max-width: 768px) {
            .container {
                padding: 20px;
            }

            h1 {
                font-size: 28px;
            }
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>Edit Your Account</h1>
        <form method="POST" action="editaccount.php">
            <label for="name">Full Name:</label>
            <input type="text" id="name" name="name" value="<?php echo htmlspecialchars($name); ?>" required>

            <label for="phone">Phone Number:</label>
            <input type="text" id="phone" name="phone" value="<?php echo htmlspecialchars($phone); ?>" required>

            <label for="email">Email:</label>
            <input type="email" id="email" name="email" value="<?php echo htmlspecialchars($email); ?>" required>
            <?php if (!empty($emailError)): ?>
                <span class="error"><?php echo $emailError; ?></span>
            <?php endif; ?>

            <label for="old_password">Old Password:</label>
            <input type="password" id="old_password" name="old_password" required>
            <?php if (!empty($passwordError)): ?>
                <span class="error"><?php echo $passwordError; ?></span>
            <?php endif; ?>

            <label for="password">New Password (Leave empty if not changing):</label>
            <input type="password" id="password" name="password">

            <button type="submit" name="update_account">Update Account</button>
            <button type="submit" name="delete_account" class="delete-button">Delete Account</button>
        </form>
        <a href="project.html" class="back-link">Back to Home</a>
    </div>
</body>
</html>
