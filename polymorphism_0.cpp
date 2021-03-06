/* First Example: Polymorphism.
* Polymorphism happens when an object or a function behave in different forms
* with different types of data or in different scenarios.
* In this example you see the addition operator behaving differently with
* integer data and string data. 
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int example_addition = 30 + 40;  // + operator used for addition
    cout << "\nThe + operator with two integers being used for addition: 30 + 40 = " << example_addition << endl;
    string myString1 = "Now we see the + operator behaving different in a different scenario.\n";
    string myString2 = "It's not addition with two strings. It's concatenation.\nThis is polymorphism.\n";
    string myString = myString1 + myString2; // + operator used for combining two strings
    cout << myString << endl;
    return 0;
}