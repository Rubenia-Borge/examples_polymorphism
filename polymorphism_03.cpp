/* Fourth Example: Polymorphism with Inheritance
* This example shows how polymorphism behaves when combined with Inheritance.
* What you need to see here is how a derived class can access both the function action()
* in the base class Animal and the function action() in the derived class itself.
* See that Man can access action() in Animal (using ::) and action() in Man.
* The same for the derived class Child. This is run-time polymorphism and 
* happens through function overriding. In function overriding, the derived class
* can access its own version of a function or the version in the base class.
* Notice that it is different from overloading. 
*/

#include <iostream>  
using namespace std;  
class Animal {  
  public:  
  void action(){ 
    int i = 0; 
    int x = 10;
    for (i = 0; i < 20; i++){
      x = x + 2;
    }
    x = x++;  
    cout <<"In the base class Animal... Eating... " << x << endl;    
  }      
};   

class Man: public Animal {    
  public:  
  void action()    
  {   
    int j = 3;
    int y = 4 + j; 
    cout <<"In the derived class Man... Working ... " << y << endl;    
  }    
};  

class Child: public Animal{
  public:
  void action()
  {
    int k = 5;
    int z = 1 + 3 + 4 + k;
    cout <<"In the derived class Child... Playing ..." << k << endl;
  }
};

int main(void) {  
  Animal animalObject = Animal(); // An object of the parent (base) class Animal 
  Man manObject = Man(); // An object of the child (derived) class Man
  Child childObject = Child(); // An object of the child (derived) class Child

  cout << "\nAn object of the base class accessing the base class action() function." << endl;
  animalObject.action();        
  
  cout << "\nAn object of the derived class Man can access both the action() function in the derived class\nand the action() function in the base class." << endl;
  manObject.action();   
  manObject.Animal::action();

  cout << "\nAn object of the derived class Child can access both the action() function in the derived class\nand the action() function in the base class." << endl;
  childObject.action();
  childObject.Animal::action();
     
  return 0;  
}










