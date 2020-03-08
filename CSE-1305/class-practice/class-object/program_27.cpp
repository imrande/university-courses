/*
  When a data member is declared with static keyword then it is known as static data member
  Write a C++ program to illustrate the concept of static data member
*/

#include <iostream>
using namespace std;

class Even {
  static int num1;
  int num2 = 20;

  public:
    void display(){
      while (num1 < num2){
        if (num1 % 2 == 0){
          cout << num1 << endl;
        }
        num1 += 1;
      }
    }
};

int Even ::num1 = 0;

int main(){
  Even even;
  even.display();
}
