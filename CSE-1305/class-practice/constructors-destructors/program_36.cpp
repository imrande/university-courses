// Write a C++ Program to illustrate the concept of default constructor...

#include <iostream>
using namespace std;

class Number {
  int num1, num2, num3;
  public:
    Number(){ // default constructor
      num1 = 5;
      num2 = 10;
      num3 = 25;
    }

    int display(){
      return num1 + num2 + num3;
    }
};

int main(){
  Number number;
  cout << "Sum is " <<number.display();
  return 0;
}
