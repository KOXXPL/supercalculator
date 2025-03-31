# Super Calculator

The **Super Calculator** is a simple console-based program written in C++ that performs various mathematical operations on two randomly generated numbers. The program allows the user to select a mathematical function and then solve the problem by entering the correct answer. The program verifies the user's input and provides feedback.

## Features

The calculator supports the following operations:
1. **Addition**: Adds two numbers.
2. **Remainder**: Finds the remainder when the first number is divided by the second.
3. **Absolute Difference**: Calculates the absolute difference between two numbers.
4. **Multiplication**: Multiplies two numbers.
5. **Greatest Common Divisor (GCD)**: Finds the largest number that divides both numbers without leaving a remainder.

## How It Works

1. The program generates two random numbers between 0 and 99.
2. The user is prompted to choose a mathematical operation from the menu.
3. The program displays the two numbers and asks the user to input the result of the selected operation.
4. The program checks the user's answer and displays whether it is correct or incorrect, along with the correct answer if needed.

## Example Usage

```
choose the function: 
[0] - addition 
[1] - the remainder of dividing the first number by the second 
[2] - absolute difference 
[3] - multiplication 
[4] - greatest common divisor 
0
the drawn numbers are: 45 and 23
enter the answer: 68
68 is the correct answer
```

## Requirements

- A C++ compiler (e.g., GCC, Clang, or MSVC)
- Standard C++ libraries

## How to Run

## How to Run

### Option 1: Download the Compiled Executable
1. Download the release file from the [Releases](https://github.com/your-repo/supercalculator/releases) page.
2. Extract the downloaded file to your desired location.
3. Run the executable file:
    - On Windows: Double-click `supercalculator.exe`.
    - On macOS/Linux: Open a terminal and run:
      ```
      ./supercalculator
      ```

### Option 2: Compile the Program Yourself
1. Ensure you have a C++ compiler installed (e.g., GCC, Clang, or MSVC).
2. Clone or download the source code from the repository.
3. Compile the program using the following command:
    ```
    g++ -o supercalculator main.cpp
    ```
4. Run the compiled program:
    ```
    ./supercalculator
    ```

