/*Third Example: Polymorphism
* This is another example of compile-time polymorphism through function overloading.
* Notice the two functions with the same names and different parameters and definitions.
* And notice in main the function calls with different arguments.
* There is no inheritance in this example. Overloading can happen without inheritance.
*/
#include <iostream>
using namespace std;
class OperatorAdd {
public:
    int AddForms(int a,int b)   // This function has two parameters
    {
        cout << "\nIn its first form it adds two integers: " << a << " + " << b << " = ";
        return a + b;     // And performs the addition of two integers
    }
    int AddForms() {              // This function does not have any parameters
        string first = "\nIn the second form it concatenates strings instead of adding\n";
        string second ="two integers.\n";   // And concatenates two strings
        string third = first + second;
        cout << third << endl;
        return 0;
        
    }
};

// Same object can use both versions of Addforms.
int main(void) {
    OperatorAdd myObject;   // An object of type OperatorAdd 
    cout << myObject.AddForms(200, 50)<<endl; // Call for the first form of the function
    myObject.AddForms();  // Call to the second form of the function
    return 0;
}
