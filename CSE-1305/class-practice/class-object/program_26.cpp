/*
  Write a program in C++ to enter the details of a student and display them using class and
  object. The details should be private in nature and use public member fn to access the
  private members. The member fns must be deined outside of class
*/

#include <iostream>
using namespace std;

class ReverseNumber {
  private:
    int number;

  public:
    int reverse = 0;
    // reverse = 0;
    void Reverse();
    ReverseNumber(){
    cout << "Enter an Interger ";
    cin >> number;

  }
};

void ReverseNumber :: Reverse(){
  while (number > 0){
    int reminder = number % 10; // will get last number
    reverse = reverse*10 + reminder;
    number /= 10; // will get remain number
  }
}

int main(){
  ReverseNumber reverse_number;
  reverse_number.Reverse();
  cout << "Reversed Number " <<reverse_number.reverse;
}
