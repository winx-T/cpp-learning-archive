#include <iostream>  // Include the iostream library for input and output functionality (std::cout, std::cin, and std::endl)

int main() {
    // Output a greeting message to the console using std::cout
    // std::cout is used to send output to the standard output (console)
    std::cout << "Hello, World!" << std::endl;  // Print "Hello, World!" followed by a newline

    // Declare variables to store the user's input
    std::string name;  // String variable to hold the name input by the user
    int age;  // Integer variable to hold the age input by the user

    // Output a message asking the user to input their name
    std::cout << "What's your name?: " << std::endl;  // Prompt the user for their name
    
    // Read the user input using std::cin
    // std::cin is used to read input from the standard input (keyboard)
    std::cin >> name;  // Store the input in the variable 'name'

    // Output a message asking the user to input their age
    std::cout << "What's your age?: " << std::endl;  // Prompt the user for their age
    
    std::cin >> age;  // Store the input in the variable 'age'

    // Output the entered name and age
    std::cout << "Hello " << name << ", you are " << age << " years old." << std::endl;  // Display the entered name and age to the user
    
    return 0;  // Return 0 to indicate successful program execution
}
