/*
Write a C++ Program to illustrate the concept of simple inheritance using private inheritance method.
The base class data member must be private...
*/

#include <iostream>
using namespace std;

class Base{
  int x;
  public:
    void fun(){
      cout << "Enter the value of x ";
      cin >> x;
      cout << "X is " <<x <<endl;
    }
};


class Derived : private Base {
  public:
    void display(){
      fun();
      int y;
      cout << "Enter the value of y ";
      cin >> y;
      cout << "Y is " << y <<endl;
    }
};

int main(){
  Derived de;
  de.display();
}
