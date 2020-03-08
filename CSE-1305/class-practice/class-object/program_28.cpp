/*
  When a member fn is declared with static keyword then it is known as static member fn
  static member fn can only access static data

  Write a c++ program to illustrate the concept of static data member fn
*/

#include <iostream>
using namespace std;

class Odd {
  static int num1;
  static int num2;

  public:
    static void display(){
      while (num1 < num2){
        if (num1 % 2 != 0){
          cout << num1 << endl;
        }
        num1 += 1;
      }
    }
};

int Odd ::num1 = 0;
int Odd ::num2 = 20;

int main(){
  Odd odd;
  odd.display();
}
