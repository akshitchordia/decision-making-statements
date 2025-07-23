# Decision Making in C++

**Name:** Akshit Chordia  
**PRN:** 24070123008  
**Division:** ENTC-A1  
**Title:** Decision Making in C++  
**Tools Used:** Visual Studio Code  

---

## Introduction

Decision making is a core part of programming that allows a program to choose actions based on conditions—just like we make choices in everyday life. For instance, “If the traffic light is red, stop. Else, go.”

C++ provides several structures to handle such logic. These include `if`, `if-else`, `else-if`, `nested if`, and `switch-case`. These constructs enable dynamic behavior based on user input, calculations, or real-time data.

---

## Types of Decision-Making Structures in C++

### 1. `if` Statement  
Executes a code block **only if** the condition is true.

### 2. `if-else` Statement  
Executes one block if the condition is true, and another if it’s false.

### 3. `else-if` Ladder  
Evaluates multiple conditions sequentially and executes the block for the first true condition.

### 4. Nested `if`  
An `if` statement inside another `if`. Useful when one condition depends on another.

### 5. `switch-case`  
Best suited for fixed choices (menus, options, etc.). Executes a matching case block and can be made more efficient with `break` statements.

---

## Programs Implemented

### 1. Even or Odd Checker

Checks whether an input number is divisible by 2 using the modulus operator.

**Sample Output:**
Enter the number: 78
The given number is even number.

### 2. Vowel or Consonant Identifier

Takes a character input and checks if it's a vowel. If not, it's considered a consonant.

**Sample Output:**
Enter a character: p
The given character is a consonant.

Enter the value of a: 67
Enter the value of b: 89
Enter the value of c: 90
c is the largest number.

### 4. Simple Calculator

Uses a `switch` statement to perform arithmetic operations based on the operator entered (`+`, `-`, `*`, `/`).

**Sample Output:**
Enter an operator (+, -, *, /): /
Enter two numbers: 10 2
10 / 2 = 5
### 5. Food Menu (Switch Case with Breaks)

A menu-driven program where the user selects a cuisine and a dish. Uses `switch` with `break` to display results based on selection.


---

## Algorithms Used

### 1. Even or Odd
- Input a number `n`
- If `n % 2 == 0`, print “Even”
- Else, print “Odd”

### 2. Vowel or Consonant
- Input a character
- Convert to lowercase
- If character is `a`, `e`, `i`, `o`, or `u`, print “Vowel”
- Else, print “Consonant”

### 3. Largest of Three Numbers
- Input values `a`, `b`, and `c`
- If `a > b` and `a > c`, print “a is largest”
- Else if `b > c`, print “b is largest”
- Else, print “c is largest”

---

## Conclusion

Understanding how to implement decision-making logic is vital for writing interactive and intelligent programs. This module explored different control structures like `if-else`, `else-if`, and `switch`, and demonstrated their use in practical scenarios such as grading, calculators, and menu selections. These concepts form the foundation of building adaptive software.

---

Submitted by **Akshit Chordia**  
**PRN:** 24070123008  
**Division:** ENTC-A1



