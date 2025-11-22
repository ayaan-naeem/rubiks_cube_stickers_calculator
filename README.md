# Rubik’s Cube Sticker Calculator

This is a simple C++ program that calculates the total number of stickers required to cover a Rubik’s Cube, based on the length of one side.
Every face of a cube has a square grid of stickers, and a cube has 6 faces, so the formula used is:

Total Stickers = Side Length 2 × 6
Total Stickers=Side Length 2 × 6

This program helps users quickly determine how many stickers are needed for cubes of any dimension (e.g., 2×2, 3×3, 4×4, etc.).

# 📌 Features

Takes user input for the side length of a Rubik’s Cube.

Calculates the total number of stickers required.

Displays the result clearly.

Clean and easy-to-understand function-based structure.

# 🧮 How It Works

The user enters the side length (e.g., a standard Rubik’s Cube has 3).

The program squares that number to determine how many stickers are on one face.

It multiplies by 6 to account for all cube faces.

It prints the total sticker count.

# 📂 Code Structure

Cube()
A function that handles input, calculation, and output.

main()
Calls the Cube() function and ends the program cleanly.

 # 💻 Sample Input/Output
Enter the Side Length of the Rubik's Cube : 3
Number of Stickers Needed : 54

# 🚀 How to Run

Compile the program:

g++ rubiks_cube_sticker_calculator.cpp -o rubiks


Run it:

./rubiks

# 📘 Purpose

This small project is designed to practice:

Using functions in C++

Taking user input

Performing arithmetic calculations

Working with clean code structure
