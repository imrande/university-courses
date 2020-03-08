/*
Multilevel Inheritance =>
when the process of single inheritance is extended up to minimum 2 levels, the concept is known as Multilevel Inheritance...
*/

// write a c++ program to add 2 integers multilevel inheritance 
#include <iostream>
using namespace std;

class A{ // Base class
  protected: // access specifier
    int number1;
};

class B:public A { // derived class
  protected: // access specifier
    int number2;
};

class C: public B { // derived class
  public: // access specifier
    void inputValue(){ // member function
      cout << "Enter the number: ";
      cin >> number1;
      cout << "Enter the another number: ";
      cin >> number2;
    }

    int displayValue(){ // member function
      return number1 + number2;
    }
};

int main(){
  C object_of_c; // object reference
  object_of_c.inputValue();
  cout << "The Sum is " << object_of_c.displayValue() <<endl;
}
