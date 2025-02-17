#include <iostream>
#include <string>

// Namespaces help organize code into logical groups and avoid naming collisions.
// In this example, we define two namespaces, 'first' and 'second', each with its own variable 'x'.

namespace first {
    int x = 5;
}

namespace second {
    int x = 10;
}

int main() {
    // A local variable.
    int x = 0;
    
    // Access variables defined in namespaces using the scope resolution operator (::)
    std::cout << "first::x = " << first::x << std::endl;   // Outputs: 5
    std::cout << "second::x = " << second::x << std::endl;   // Outputs: 10
    std::cout << "local x = " << x << std::endl;             // Outputs: 0

    // Alternative way without the 'using' directive:
    /* std::cout << first::x; // 5
       std::cout << second::x; // 10 */

    // If you want to use a namespace without qualifying its members every time,
    // you can use the 'using' directive. It's best to limit its scope to avoid name clashes.
    {
        using namespace first;
        // Here, x from namespace 'first' is brought into the local scope.
        std::cout << "Using namespace first, x = " << x << std::endl; // Outputs: 5

        // To access a member from another namespace, you still need to qualify it:
        std::cout << "Access second::x while using namespace first, x = " << second::x << std::endl; // Outputs: 10
    }

    // Now, if you want to use standard library types and functions without the std:: prefix,
    // you can also use a using directive:
    using namespace std;
    string name = "Win-x";
    cout << "Hello " << name << endl;

    // Best Practice: Instead of using entire namespaces at a global level, prefer specific declarations:
    // using std::string;
    // using std::cout;
    // using std::endl;

    // You can also create a namespace alias to shorten long namespace names.
    namespace fs = first;
    cout << "fs::x (alias for first::x) = " << fs::x << endl; // Outputs: 5

    /*
    Explanation:
    - Namespaces allow you to have variables, functions, or classes with the same name as long as they reside in different namespaces.
    - You can access namespace members using the scope resolution operator (::).
    - The 'using' directive lets you access an entire namespace without qualifying its members each time. However, use it carefully to avoid name clashes.
    - Alternatively, use specific declarations (e.g., using std::cout) for clarity and safety.
    - Namespace aliases help simplify access when dealing with long or deeply nested namespaces.
    */

    return 0;
}