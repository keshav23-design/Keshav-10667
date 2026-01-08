# Keshav-10667
# P21: Menu-Driven Number Operations System

## 📄 Project Details
* **Project Title:** Menu-Driven Basic Number Operations
* **Language:** C Programming Language
* **Tools Used:** VS Code, GCC Compiler
* **Type:** Console Application (CLI)
* **Description:** A modular C program that allows users to generate specific number sequences (Natural, Even, Odd) through an interactive menu system.

## ❓ Why We Made This Project
The main objective of this project was to move away from writing all code inside the `main()` function and instead adopt a **Modular Programming** approach. Specifically, we aimed to:
1.  Isolate logic into reusable **functions**.
2.  Implement a user-friendly **menu system**.
3.  Practice passing parameters (arguments) to functions.

## 🛠 Utility & Features
This program acts as a mathematical sequence generator. It allows the user to:
* **Select an Operation:** Choose between three distinct modes via a numbered menu.
* **Define Limits:** Input a custom value `N` to determine how far the sequence runs.
* **Generate Sequences:**
    1.  **Natural Numbers:** Prints 1, 2, 3... N
    2.  **Even Numbers:** Prints 2, 4, 6... N
    3.  **Odd Numbers:** Prints 1, 3, 5... N

## 🧠 What We Learned
By building this project, we gained practical experience in several core C programming concepts:
* **Function Decomposition:** We learned how to declare, define, and call functions (`void`) to keep the code organized.
* **Switch-Case Logic:** We learned how to use `switch` statements to effectively handle menu selections instead of using multiple `if-else` blocks.
* **Control Flow:** We reinforced our understanding of `for` loops and the modulo operator (`%`) to filter even and odd numbers.
* **Input Handling:** We practiced capturing user input using `scanf` and passing that input to different parts of the program.

## 🚀 Future Scope
This project can be expanded in several ways:
1.  **Looping Menu:** Implement a `do-while` loop so the program doesn't exit after just one operation, allowing the user to perform multiple tasks in one session.
2.  **Advanced Operations:** Add more functions for complex calculations like **Factorial**, **Fibonacci Series**, or **Prime Number** checks.
3.  **Input Validation:** Add error handling to prevent the program from crashing if the user enters a letter instead of a number.

## 📸 Output Screenshot
<img width="667" height="244" alt="image" src="https://github.com/user-attachments/assets/696e4f5d-7a72-46e4-82ca-0ef51e34e980" />


```text

MENU

1. Print numbers from 1 to N
2. Print even numbers up to N
3. Print odd numbers up to N

Enter your choice (1-3): 2
Enter the value for N: 15

--- Printing Even Numbers up to 15 ---
2 4 6 8 10 12 14
