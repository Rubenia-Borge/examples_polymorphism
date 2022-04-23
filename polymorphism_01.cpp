/* Second Example: Polymorphism.
* This is an example of compile-time polymorphism.
* Compile-time polymorphism is achieved through overloading.
* Function overloading allows a function with the same name
* to have different arguments and behave different in different scenarios.
* Remember constructor overloading. It does not require Inheritance relationships. 
* In this example you can see the function print() with three different prototypes
* and definitions. They have different parameters and they perform different tasks.
* They only share name and scope. That is overloading and compile-time polymorphism.
*/

#include <iostream>
#include <string>
using namespace std;

class Printer{
    public:
      void print(int i, int z) {
        int j = z;
        cout << "\nFunction Overloading print() with an int argument: " << i << endl;
        cout << "First Result: " << (i + 45) << endl;
        
        i = i + j + 35;
        cout << "Second Result: " << (i + 38) << endl; 

        j = j + 5;
        i = i - 1;   

        cout << "Third Result: i = " << i << " and j = "  << j << endl;
      }

      void print(double f) {
        double old_f = f;
        double g = 22.22;
        f = f + g;
        cout << "Function Overloading print() with a double argument: " << old_f << endl;
        cout << "The value of f changed from " << old_f << " to " << f << endl;
      }

      void print(string s) {
        int i;
        string old_s = s;
        cout << "Function Overloading print() with a string argument: " << old_s << endl;

        for (i = 0; i < 3; i++){
          s = s + " " + s;
        }

        cout << "Old s = " << old_s << endl;
        cout << "New s = " << s << endl;


      }
};

// See that print is called in its three versions with different arguments in the function calls.
int main() {
  Printer p;
  p.print(22,1);
  p.print(22.22);
  p.print("Twenty-two");
  cout << endl;
  return 0;
}
