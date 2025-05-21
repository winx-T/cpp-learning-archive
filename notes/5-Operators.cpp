#include <iostream>

int main() {
    // ARITHMETIC OPERATORS = return the result of a specific arithmetic operation (+ * /)
    int a = 10, b = 3;
    int students = 12; // Variable to hold the number of students
    std::cout << "Arithmetic Operators:\n";
    std::cout << "a + b = " << (a + b) << '\n'; // Addition
    std::cout << "a - b = " << (a - b) << '\n'; // Subtraction
    std::cout << "a * b = " << (a * b) << '\n'; // Multiplication
    std::cout << "a / b = " << (a / b) << '\n'; // Integer Division
    std::cout << "a % b = " << (a % b) << '\n'; // Modulus (remainder)
    std::cout << "++a = " << ++a << '\n'; // Pre-increment = (increase by 1 before using the value)
    std::cout << "a++ = " << a++ << '\n'; // Post-increment = (increase by 1 after using the value)
    std::cout << "a = " << a << '\n'; // Current value of a after post-increment
    std::cout << "--a = " << --a << '\n'; // Pre-decrement = (decrease by 1 before using the value)
    std::cout << "a-- = " << a-- << '\n'; // Post-decrement = (decrease by 1 after using the value)
    std::cout << "a = " << a << '\n'; // Current value of a after post-decrement
    std::cout << "\n";

    // RELATIONAL OPERATORS = return a boolean value (true or false) based on the comparison of two values
    std::cout << "Relational Operators:\n";
    std::cout << "a == b: " << (a == b) << '\n'; // Equal to
    std::cout << "a != b: " << (a != b) << '\n'; // Not equal to
    std::cout << "a > b: " << (a > b) << '\n';  // Greater than
    std::cout << "a < b: " << (a < b) << '\n';  // Less than
    std::cout << "a >= b: " << (a >= b) << '\n'; // Greater than or equal to
    std::cout << "a <= b: " << (a <= b) << '\n'; // Less than or equal to
    std::cout << "\n";

    // LOGICAL OPERATORS = return a boolean value (true or false) based on the logical operation between two boolean values
    bool x = true, y = false;
    std::cout << "Logical Operators:\n";
    std::cout << "x && y: " << (x && y) << '\n'; // Logical AND && = check if two conditions are true
    std::cout << "x || y: " << (x || y) << '\n'; // Logical OR  || check if at least one of two conditions is true
    std::cout << "!x: " << (!x) << '\n';         // Logical NOT  ! = reverses the logical state of its operand
    std::cout << "\n";

    // ASSIGNMENT OPERATORS = used to assign values to variables
    students = 5; // Re-initialize students for assignment operations
    std::cout << "Assignment Operators:\n";
    std::cout << "students = " << students << '\n'; // Current value of students
    std::cout << "students += 2 = " << (students += 2) << '\n'; // Compound assignment = (add 2 to students)
    std::cout << "students -= 2 = " << (students -= 2) << '\n'; // Compound assignment = (subtract 2 from students)
    std::cout << "students *= 2 = " << (students *= 2) << '\n'; // Compound assignment = (multiply students by 2)
    std::cout << "students /= 2 = " << (students /= 2) << '\n'; // Compound assignment = (divide students by 2)
    std::cout << "students %= 2 = " << (students %= 2) << '\n'; // Compound assignment = (remainder of students divided by 2)
    std::cout << "\n";

    // BITWISE OPERATORS = used to perform operations on bits of integer values
    // These operators work on binary representations of integers
    int d = 6;  // 0110 in binary
    int e = 3;  // 0011 in binary
    std::cout << "Bitwise Operators:\n";
    std::cout << "d & e = " << (d & e) << '\n';   // AND
    std::cout << "d | e = " << (d | e) << '\n';   // OR
    std::cout << "d ^ e = " << (d ^ e) << '\n';   // XOR
    std::cout << "~d = " << (~d) << '\n';         // NOT
    std::cout << "d << 1 = " << (d << 1) << '\n'; // Left shift
    std::cout << "d >> 1 = " << (d >> 1) << '\n'; // Right shift

    return 0;
}
