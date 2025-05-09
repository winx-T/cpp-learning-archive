/* 
   C++ is a powerful, general-purpose programming language created by Bjarne Stroustrup.
   It was designed to improve upon C by introducing object-oriented features and other enhancements, 
   allowing for more complex, modular, and maintainable code. 

   C++ is widely used in system and software development, game development, embedded systems, 
   and performance-critical applications due to its high efficiency and control over system resources. 
   It is a compiled language, meaning the code is translated into machine code before execution, 
   ensuring fast performance.

   Key Features of C++:
   - Statically typed: Variables are checked at compile-time, preventing many types of errors early.
   - Supports both procedural and object-oriented programming (OOP) paradigms.
   - Allows the creation of classes and objects for modular design and code reuse.
   - Has a rich Standard Library offering a wide range of functions and data structures.
   - Supports templates, enabling generic programming to create reusable code.

   C++ is also known for its close relationship with hardware, giving developers fine-grained control 
   over system memory and performance.
*/

/* 
   The C++ Compiler Process:
   When you write C++ code, it needs to be compiled into machine code so the computer can execute it.
   This is done in several stages: Preprocessing, Compilation, Assembly, and Linking.

   - **Preprocessing**: 
     The preprocessor handles directives like `#include` and `#define`. 
     It processes these before the actual compilation starts.
     Command: `g++ -E program.cpp -o program.i`

   - **Compilation**: 
     The compiler translates the preprocessed code into assembly language.
     Command: `g++ -S program.i -o program.s`

   - **Assembly**: 
     The assembler takes the assembly code and converts it into machine code (binary format).
     Command: `g++ -c program.s -o program.o`

   - **Linking**: 
     The linker combines object files, resolving references between them to create the final executable.
     Command: `g++ program.o -o program`

   Compiler examples: GCC, Clang, MSVC (Microsoft Visual C++)
*/

// This is the absolute simplest C++ program you can write (with no output or functionality)
int main() {}
