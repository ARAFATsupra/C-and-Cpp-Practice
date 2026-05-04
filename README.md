# C and C++ Practice Programs

A collection of C and C++ programs written during the study of the ITM 112 course at the Department of Information Technology and Management (ITM), 8th Batch. This repository includes beginner practice programs, course tasks, lab assignments, and a quiz.

---

## About

**Author:** Kazi Arafat Hossain (Sakib)  
**Department:** Information Technology and Management  
**Batch:** ITM 8th Batch  
**Languages:** C, C++  
**IDE Used:** Code::Blocks  

---

## Repository Structure

```
.
├── C/
│   ├── pattern-print/         # Prints a name in a staircase pattern using nested loops
│   └── bowling-calculator/    # Calculates cricket bowling figures from a ball-by-ball string
│
├── Cpp-Practice/
│   ├── 01-first-program/      # Switch statement demo - prints a day name
│   ├── 02-user-input/         # Takes name and age as input and greets the user
│   ├── 03-if-else/            # Compares two SGPA values using if-else conditions
│   ├── 04-nested-if-else/     # Demonstrates nested if-else logic with number ranges
│   ├── 05-function-overloading/  # Pizza ordering demo using function overloading
│   ├── 06-dice-roller/        # Rolls two dice using random number generation
│   ├── 07-calculator/         # Four-operation calculator (+, -, *, /)
│   └── 08-login-registration/ # Simple console-based login and registration system
│
└── Cpp Practice/
    ├── task-1-arithmetic/     # Addition and multiplication of two numbers
    ├── task-2-char-io/        # Character input and output in different formats
    ├── task-3-string-concat/  # Concatenates three string inputs into one line
    ├── lab-1-calculator/      # Add or subtract two numbers based on user choice
    └── lab-2-string-name/     # Demonstrates string concatenation to form a full name
```

---

## Programs Overview

### C Programs

| Folder | Description |
|---|---|
| `C/pattern-print` | Uses nested `for` loops to print a name in a staircase triangle pattern |
| `C/bowling-calculator` | Reads a sequence of cricket ball results (digits for runs, `W` for wickets) and outputs overs, runs, and wickets bowled |

### C++ Practice Programs

| Folder | Concept Practiced | Description |
|---|---|---|
| `01-first-program` | `switch` statement | Prints the name of a day based on a number |
| `02-user-input` | `cin`, `cout`, variables | Asks the user for their name and age, then greets them |
| `03-if-else` | `if`, `else if`, `else` | Compares two SGPA values and decides if they are equal or different |
| `04-nested-if-else` | Nested conditionals | Checks a number against ranges using layered if-else blocks |
| `05-function-overloading` | Function overloading | Calls different versions of `bakePizza()` based on the number of arguments |
| `06-dice-roller` | `rand()`, `srand()`, `time()` | Simulates rolling two dice and prints the result |
| `07-calculator` | Arithmetic operators, `if-else` | Performs addition, subtraction, multiplication, or division based on user input |
| `08-login-registration` | `string`, `getline()`, comparison | Registers a username and password, then checks if the login credentials match |

### C++ Course Work Practice

| Folder | Type | Description |
|---|---|---|
| `task-1-arithmetic` | Task | Inputs two integers and prints their sum and product |
| `task-2-char-io` | Task | Inputs three characters and prints them in two different formats |
| `task-3-string-concat` | Task | Inputs three strings and concatenates them into a single line |
| `lab-1-calculator` | Lab | Simple add or subtract calculator based on operator input |
| `lab-2-string-name` | Lab | Demonstrates string concatenation by building a full name from parts |

---

## How to Compile and Run

You need a C or C++ compiler installed on your computer. The most common one for Windows is **MinGW** (which includes `gcc` and `g++`).

**To compile a C file:**
```
gcc main.c -o output
output
```

**To compile a C++ file:**
```
g++ main.cpp -o output
output
```

You can also open any `.cbp` file directly in **Code::Blocks** to build and run the program with one click.

---

## Topics Covered

- Variables and data types
- Input and output (`cin`, `cout`, `printf`, `scanf`)
- Arithmetic operators
- `if`, `else if`, `else` conditions
- Nested conditional statements
- `switch` statements
- `for` loops and nested loops
- Functions and function overloading
- Random number generation
- Strings and string concatenation
- Simple login and registration logic

---

## License

This repository is for educational purposes. Feel free to use any code here for learning.
