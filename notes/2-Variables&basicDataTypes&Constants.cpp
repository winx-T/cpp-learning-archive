#include <iostream>
#include <string>

int main() {
// Variables are named storage locations that can be used to hold different pieces of data.
    // Each variable in C++ has a data type which determines the size and type of data it holds.

    // INTEGER (whole number)
    int a; // Declaration
    a= 3; // assignment

    int age=22; //Declaration and assignment

    /* FLOAT (decimal number)
     useful when you need to save memory and precision is not critical.*/
    float c= 3.5;

    //DOUBLE: (decimal number Similar to float but holds double the precision)
    double d= 7.5;

    /* CHARACTER: Used to store single characters.
     They are enclosed in single quotes ('').*/
    char e= 'A';
    char currency= '$';

    // BOOLEAN: (true or false)
    bool is_true= true;
    bool is_false= false;
    bool is_greater= 5>3;

   // STRING: Used to store a sequence of characters (text).
    std::string name= "winx";
    std::string date = "2025-feb-12";


    std::cout << "Integer a: " << a << '\n';
    std::cout << "Float c: " << c << std::endl;
    std::cout << "Double d: " << d << std::endl;
    std::cout << "Char e: " << e << std::endl;
    std::cout << "Currency symbol: " << currency << std::endl;
    std::cout << "Result of 5 > 3 (boolean): " << is_greater << std::endl;
    std::cout << "Hello, my name is " << name << std::endl;
    std::cout << "I'm " << age << " years old" << std::endl;
    std::cout << "Date: " << date << std::endl;


/* Constant variables: Variables declared with the 'const' keyword, 
   meaning their values cannot be changed after initialization.
   ensuring that any attempts to modify the variable result in a compile-time error.*/
    const double PI = 3.14159; // Value of PI
    const int LIGHT_SPEED = 299792458; // Speed of light in meters per second
    const int WIDTH = 1920; // Screen width in pixels
    const int HEIGHT = 1080; // Screen height in pixels

  
    std::cout << "Constant PI: " << PI << std::endl;
    std::cout << "Speed of light: " << LIGHT_SPEED << " m/s" << std::endl;
    std::cout << "Screen width: " << WIDTH << " pixels" << std::endl;
    std::cout << "Screen height: " << HEIGHT << " pixels" << std::endl;

    return 0;
}
