# C and C++ Practice Programs

A complete collection of C and C++ programs written during the study of the ITM 112 course at the Department of Information Technology and Management (ITM), 8th Batch. This repository covers everything from the very first program to advanced topics like structures, pointers, recursion, and matrix operations.

---

## Author

**Name:** Kazi Arafat Hossain (Sakib)
**Department:** Information Technology and Management
**Batch:** ITM 8th Batch
**Languages:** C, C++
**IDE Used:** Code::Blocks

---

## Repository Structure

```
.
├── C/
│   ├── practice/
│   │   ├── 01-basics/               # First programs, arithmetic, operators
│   │   ├── 02-conditionals/         # if, else if, else, ternary
│   │   ├── 03-switch-cases/         # switch statements and calculators
│   │   ├── 04-loops/                # while, do-while, for loops, patterns
│   │   ├── 05-arrays/               # 1D arrays, search, sum, largest/smallest
│   │   ├── 06-strings/              # string length, reverse, word count, cleanup
│   │   ├── 07-functions/            # functions with arguments, pointers, recursion
│   │   ├── 08-structures/           # struct with user input, arrays of structs
│   │   └── 09-advanced/             # 2D arrays, matrix addition, advanced math
│   └── extra/
│       ├── 01-pattern-prints/       # Triangle and inverted triangle patterns
│       ├── 02-matrix-operations/    # Add, subtract, multiply, transpose, diagonal
│       ├── 03-string-functions/     # strcmp, strcpy, strcat, strlen demos
│       ├── 04-c-functions/          # All four function types (void, return, pointer)
│       └── 05-structures/           # Student, Person struct examples
│
├── Cpp-Practice/
│   ├── 01-first-program/            # Switch statement day printer
│   ├── 02-user-input/               # Name and age input
│   ├── 03-if-else/                  # SGPA comparison
│   ├── 04-nested-if-else/           # Nested conditional demo
│   ├── 05-function-overloading/     # Pizza ordering with overloading
│   ├── 06-dice-roller/              # Random dice simulation
│   ├── 07-calculator/               # Four-operation calculator
│   ├── 08-login-registration/       # Console login and registration
│   ├── 09-variables-expressions/    # Variables, constants, operators
│   ├── 10-conditionals-operators/   # Grades, temperature, ternary, logical
│   ├── 11-math-functions/           # pow, sqrt, abs, round, ceil, floor
│   ├── 12-switch-statements/        # Month, grade, calculator with switch
│   ├── 13-string-methods/           # length, empty, append, insert, find, erase
│   ├── 14-loops/                    # while, do-while, for, break, continue, nested
│   ├── 15-random-games/             # rand(), dice, prize selector, guessing game
│   └── 16-functions/               # void functions, return values, overloading
│
└── ITM-112/
    ├── task-1-arithmetic/
    ├── task-2-char-io/
    ├── task-3-string-concat/
    ├── quiz-3/
    ├── re-quiz/
    ├── lab-1-calculator/
    └── lab-2-string-name/
```

---

## C Practice Programs

### 01 - Basics

| File | Description |
|---|---|
| `prog01_hello_world.c` | Prints "This is my first C Program" |
| `prog02_add_two_numbers.c` | Adds two hardcoded numbers |
| `prog03_multiply_two_numbers.c` | Multiplies two hardcoded numbers |
| `prog04_circle_area_circumference.c` | Calculates area and circumference of a circle |
| `prog05_simple_compound_interest.c` | Calculates simple and compound interest |
| `prog06_swap_without_third_var.c` | Swaps two values without a third variable |
| `prog07_swap_with_third_var.c` | Swaps two values using a third variable |
| `prog08_sizeof_data_types.c` | Displays the size of int, float, double, char |
| `prog09_largest_of_three_ternary.c` | Finds the largest of three numbers using ternary operators |
| `prog10_prefix_postfix_operators.c` | Demonstrates prefix and postfix increment/decrement |

### 02 - Conditionals

| File | Description |
|---|---|
| `prog16_even_or_odd.c` | Checks if a number is even or odd |
| `prog17_positive_negative_zero_int.c` | Checks if a number is positive, negative, or zero |
| `prog19_leap_year.c` | Checks whether a year is a leap year |
| `prog20_char_type_ascii.c` | Classifies a character using ASCII values |
| `prog21_char_type_literal.c` | Same as above but uses character literals |
| `prog22_compare_two_numbers.c` | Prints >, <, or = for two numbers |
| `prog23_grade_from_marks.c` | Assigns grade A+ through F based on marks |
| `prog63_divisible_by_5_and_11.c` | Checks divisibility by 5 and/or 11 |

### 03 - Switch Cases

| File | Description |
|---|---|
| `prog25_day_name.c` | Prints day name from a number (1-7) using switch |
| `prog28_calculator_switch.c` | Calculator using switch for +, -, *, / |
| `prog64_month_days.c` | Prints month name and number of days using switch |

### 04 - Loops

| File | Description |
|---|---|
| `prog33_sqrt_loop_break_on_negative.c` | Square root loop that stops when input is negative |
| `prog35_count_digits.c` | Counts the number of digits in a number |
| `prog36_staircase_star_pattern.c` | Prints a staircase star pattern using nested for loops |
| `prog39_name_triangle_pattern.c` | Prints a centered name triangle pattern |
| `prog41_multiplication_table.c` | Prints the multiplication table of a given number |
| `prog43_palindrome_check.c` | Checks if a number is a palindrome |
| `prog44_gcd_lcm.c` | Calculates GCD and LCM of two numbers |

### 05 - Arrays

| File | Description |
|---|---|
| `prog45_array_input.c` | Takes 10 numbers as array input |
| `prog46_array_input_output.c` | Takes and displays 10 array elements |
| `prog49_array_sum.c` | Finds the sum of 5 array elements |
| `prog50_array_product.c` | Finds the product of 5 array elements |
| `prog78_linear_search.c` | Searches for an element in an array (linear search) |
| `prog79_array_sum_dynamic.c` | Sum of n elements entered by the user |
| `prog80_largest_smallest.c` | Finds the largest and smallest element in an array |

### 06 - Strings

| File | Description |
|---|---|
| `prog55_string_length_manual.c` | Counts string length without any library function |
| `prog56_string_length_strlen.c` | Counts string length using strlen |
| `prog57_count_alpha_digit_special.c` | Counts alphabets, digits, and special characters |
| `prog61_strcmp_demo.c` | Compares two strings using strcmp |
| `prog62_strcat_demo.c` | Concatenates two strings using strcat |
| `prog87_word_count.c` | Counts the total number of words in a sentence |
| `prog89_reverse_string.c` | Reverses a string using a function |
| `prog91_remove_digits_and_symbols.c` | Removes digits and special characters from a string |

### 07 - Functions

| File | Description |
|---|---|
| `prog67_four_operation_functions.c` | Four separate functions for add, subtract, multiply, divide |
| `prog69_sum_natural_numbers.c` | Sum of first N natural numbers using a function |
| `prog70_increment_by_pointer.c` | Increments three numbers using pointers |
| `prog71_swap_by_value_vs_reference.c` | Compares swap by value vs swap by reference |
| `prog85_recursive_factorial.c` | Calculates factorial using recursion |

### 08 - Structures

| File | Description |
|---|---|
| `prog72_company_struct.c` | Company struct with name, address, phone, employees |
| `prog75_student_array_struct.c` | Array of Student structs with input and display |
| `prog77_employee_struct.c` | Employee struct using pointer-based functions |

### 09 - Advanced

| File | Description |
|---|---|
| `prog81_2d_array_access.c` | Access a 2D array element by row and column index |
| `prog83_sum_checkerboard_elements.c` | Sum elements at checkerboard positions (i+j even) |
| `prog84_sqrt_sum_and_factorial.c` | Computes sum of square roots and factorial together |

---

## C Extra Programs

### 01 - Pattern Prints

| File | Description |
|---|---|
| `prog01_triangle_input.c` | Right triangle of stars with user-defined rows |
| `prog02_triangle_fixed.c` | Fixed 5-row right triangle |
| `prog03_inverted_triangle_input.c` | Inverted right triangle with user-defined rows |
| `prog04_inverted_triangle_fixed.c` | Fixed 5-row inverted triangle |

### 02 - Matrix Operations

| File | Description |
|---|---|
| `matrix_addition.c` | Adds two matrices of any size |
| `matrix_subtraction.c` | Subtracts two matrices |
| `matrix_multiplication.c` | Multiplies two matrices (checks dimensions) |
| `matrix_transpose.c` | Transposes a matrix |
| `matrix_diagonal_sum.c` | Finds the sum of diagonal elements |
| `matrix_upper_lower_triangle_sum.c` | Sums upper and lower triangle elements separately |
| `matrix_row_col_sum.c` | Prints the sum of each row and each column |

### 03 - String Functions

| File | Description |
|---|---|
| `strcmp_demo.c` | Compares two strings and prints the result |
| `strncmp_demo.c` | Compares first N characters of two strings |
| `strcpy_demo.c` | Copies one string into another |
| `strncpy_demo.c` | Copies only the first N characters |
| `strcat_demo.c` | Concatenates two strings |
| `strncat_demo.c` | Concatenates only the first N characters |
| `strlen_demo.c` | Finds the length of a string |
| `string_rotation.c` | Rotates "ABCDEF" to "DEFABC" |

### 04 - C Functions (All Four Types)

| File | Description |
|---|---|
| `func01_no_args_no_return.c` | Function with no arguments and no return value |
| `func02_args_no_return.c` | Function with arguments and no return value |
| `func03_args_with_return.c` | Function with arguments and a return value |
| `func04_no_args_with_return.c` | Function with no arguments but a return value |
| `func05_swap_by_pointer.c` | Swap two numbers using pointers |
| `func06_even_odd_check.c` | Check even or odd using a function |
| `func07_sum_1_to_n.c` | Sum from 1 to N using a function |

### 05 - Structures

| File | Description |
|---|---|
| `struct01_basic_student.c` | Basic student struct access |
| `struct02_array_of_students.c` | Array of student structs with input |
| `struct03_copy_struct.c` | Copy one struct into another using assignment |

---

## C++ Practice Programs

### 01 to 08 (from previous zip files)

These folders cover the first set of programs including first program, user input, if-else SGPA comparison, nested if-else, function overloading (pizza), dice roller, calculator, and login/registration. See the folders directly for their source files.

### 09 - Variables and Expressions

Programs 2 through 20. Covers triple assignment, two data types, value swap, constants, arithmetic with variables, postfix operators, parentheses, user input addition, bool I/O, and character combinations.

### 10 - Conditionals and Operators

Covers temperature conversion both ways, grade calculation from marks, subject average with grade, age eligibility check, pass/fail ternary, odd/even ternary, temperature range check with `&&` and `||`, and a full bidirectional temperature converter.

### 11 - Math Functions

Covers `pow()`, circle area, `min()`, `max()` for two and three numbers, `sqrt()`, `abs()`, `round()`, `ceil()`, `floor()`, and hypotenuse calculation.

### 12 - Switch Statements

Covers a 12-month name printer, grade feedback switch, and a four-operation calculator built with switch.

### 13 - String Methods

Covers `length()`, `empty()`, `clear()`, `append()`, `at()`, `insert()`, `find()`, and `erase()` — one program per method.

### 14 - Loops

Covers `while` with name input, `while` for positive number validation, `do-while`, basic `for`, counting up by 1 and by 2, countdown, break, continue, nested loops, and a custom symbol grid printer.

### 15 - Random and Games

Covers `rand()`, single dice, three dice, a random prize selector using switch, and a complete number guessing game.

### 16 - Functions

Covers void functions with no arguments, one argument, and two arguments. Covers functions that return a value (square, cube), string concatenation functions, and function overloading (pizza with 0, 1, and 2 toppings).

---

## ITM 112 Course Work

| Folder | Type | Description |
|---|---|---|
| `task-1-arithmetic` | Task | Addition and multiplication of two numbers |
| `task-2-char-io` | Task | Three character inputs printed in two formats |
| `task-3-string-concat` | Task | Three string inputs concatenated into one line |
| `quiz-3` | Quiz | Division and multiplication expressions |
| `re-quiz` | Re-quiz | Addition, subtraction, and multiplication of three values |
| `lab-1-calculator` | Lab | Add or subtract based on user operator choice |
| `lab-2-string-name` | Lab | String concatenation to build a full name |

---

## Topics Covered

**C Language:** printf/scanf, data types, sizeof, arithmetic, ternary operators, if-else, switch, goto, while, do-while, for loops, break, continue, 1D and 2D arrays, strings without library functions, string library functions (strcmp, strcpy, strcat, strlen), functions (all four types), pointers, call by value vs call by reference, recursion, structures, array of structures, matrix operations.

**C++ Language:** cout/cin, variables, constants, string class, getline, if-else, switch, while, do-while, for loops, break, continue, nested loops, math library functions, string methods, random number generation, void functions, return-value functions, function overloading.

---

## How to Compile and Run

You need a C or C++ compiler installed. On Windows, install **MinGW** from https://www.mingw-w64.org.

Compile a C file:
```
gcc main.c -o output
output
```

Compile a C file that uses math functions:
```
gcc main.c -o output -lm
output
```

Compile a C++ file:
```
g++ main.cpp -o output
output
```

You can also open any `.cbp` file directly in **Code::Blocks** and press F9 to build and run.

---

## License

This repository is for educational purposes. Feel free to use any code here for learning.
