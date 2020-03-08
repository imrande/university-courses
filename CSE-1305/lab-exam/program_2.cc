/*
Multiple Inheritance =>
when a new class is derived from more than one base class, the concept is known as multiple inheritance
*/

// write a c++ program to add 2 integers multiple inheritance
#include <iostream>
using namespace std;

class A {
  protected:
    int x;
};

class B {
  protected:
    int y;
};

class C: public A, public B {
  public:
    void input(){
      cout << "Enter number: ";
      cin >> x;
      cout << "ENter another number: ";
      cin >> y;
    }

    int display(){
      return x + y;
    }
};

int main(){
  C object_of_c;
  object_of_c.input();
  cout << "The Sum is " <<object_of_c.display() <<endl;
  return 0;
}
