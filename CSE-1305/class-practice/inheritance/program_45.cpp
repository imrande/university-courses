/*
Write a C++ Program to illustrate the concept of simple inheritance using pubic inheritance method.
The base class data member must be private...
*/

#include <iostream>
using namespace std;

class One{ // Base class
  private:
    int x = 5;

  public:
    void fun(){
      cout << ++x <<endl;
    }
};

class Two: public One{ // Derived Class
  public:
    void display(){
      fun();
    }
};

int main(){
  Two two;
  two.display();
}
