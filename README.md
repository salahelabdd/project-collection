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

