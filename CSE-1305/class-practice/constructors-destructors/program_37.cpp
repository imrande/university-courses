// Write a C++ Program to illustrate the concept of parameterized constructor...

#include <iostream>
using namespace std;

class EvenOddNumber{
  int number;
  public:
    EvenOddNumber(int x);

    void displayEvenOdd(){
      while (number > 0){
        number -= 1;
        if (number % 2 == 0){
          cout << number <<endl;
        } else {
          cout << number <<endl;
        }
      }
    }
};

EvenOddNumber::EvenOddNumber(int x){ // parameterized constructor outside class
  number = x;
}

int main(){
  EvenOddNumber even_odd_num(20);
  even_odd_num.displayEvenOdd();
  return 0;
}
