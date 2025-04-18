# project-collection
Collection of my programming and development projects

---

##  Tweety Game

A simple C++ game where the player controls Tweety to dodge obstacles.  
This project demonstrates basic logic, conditionals, and simple graphics in console.

- File: `Tweety.cpp`
- Concepts: Game loops, keyboard input, and ASCII art


---

##  Huffman Coding - File Compression and Decompression

This C++ project implements **Huffman Coding**, a classic greedy algorithm used for **lossless data compression**. The program reads a `.bmp` image file, compresses its contents using Huffman encoding, and then decompresses it back to its original form.

###  Features

- Counts frequency of each byte in a binary file (`in.bmp`)
- Builds a **Huffman Tree** using a priority queue (linked list-based)
- Generates optimal **prefix codes** for each byte
- Compresses the file and saves encoded data in `compressed.txt`
- Decompresses back to `outputImage.bmp` using the stored Huffman codes
- Outputs Huffman codes in a readable format (`huffmanCodes.txt`)

###  Concepts Used

- Greedy Algorithms
- Binary Trees (Huffman Tree)
- Bitwise Operations
- File I/O in Binary Mode
- Linked List-based Priority Queue

###  Main Files

- `in.bmp` — Input binary file to compress
- `compressed.txt` — Huffman-encoded compressed output
- `outputImage.bmp` — Decompressed output file (should match original)
- `huffmanCodes.txt` — Text file with mapping of characters to Huffman codes

###  How It Works

1. **Frequency Count**: Reads each byte from `in.bmp` and counts how often each byte appears.
2. **Build Huffman Tree**: Inserts frequency nodes into a sorted linked list and constructs a tree combining least frequent nodes.
3. **Code Generation**: Traverses the Huffman Tree to assign binary codes (prefix-free) to each byte.
4. **Compression**: Encodes the original file using the generated Huffman codes, writing bits into a compressed file.
5. **Decompression**: Reads the compressed file, decodes each bit stream using the Huffman codes, and reconstructs the original file.




---

##  Skyline Travels – Travel Agency Website

**Skyline Travels** is a fully functional travel agency website developed using **HTML**, **CSS**, **JavaScript**, and **PHP**. It allows users to search for trips, make bookings, manage their profiles, and more — all from a clean, responsive interface.

---

### Features

-  **Trip Search Engine** – Find available trips by destination or filters  
-  **Booking System** – Book trips easily and securely  
-  **User Login & Logout** – Secure authentication system  
-  **Edit Profile** – Update user information  
-  **View All Trips** – Display trip packages with details and media  
-  **Contact Form** – Reach out to the agency directly  
-  **Admin Options** *(if implemented)* – Manage trips, users, and bookings

---

###  Tech Stack

- **Frontend:**  
  - HTML  
  - CSS  
  - JavaScript (Vanilla JS)

- **Backend:**  
  - PHP  

- **Development Tools:**  
  - **WAMP Server** (Windows Apache MySQL PHP)  
  - phpMyAdmin (for managing the database)

---

###  How to Run Locally (Using WAMP)

1. **Start WAMP Server**
   - Ensure Apache and MySQL services are running

2. **Place Project Folder**
   - Copy the project folder into `C:\wamp64\www\skyline-travels`

3. **Import the Database**
   - Open `http://localhost/phpmyadmin`
   - Create a new database (e.g., `skyline`)
   - Import the `.sql` file included in the project folder

4. **Run the App**
   - Visit `http://localhost/skyline-travels` in your browser

---

###  Notes

- Make sure WAMP is fully running (green icon in the taskbar)
- Ensure your `.php` files are in the correct project directory
- You can add styling with Bootstrap for responsiveness (optional)
- Expand with payment gateway integration if needed

---
