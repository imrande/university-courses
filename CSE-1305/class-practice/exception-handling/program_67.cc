/*
write a program in c++ to illustrate the concept of an exception in absence of exception
handling mechanism
*/

#include <iostream>
using namespace std;

void errorFun(){
  int x, y;
  cout << "Enter number ";
  cin >> x;
  cout << "Enter another number ";
  cin >> y;

  int result = x / y;
  cout << "The result is " << result <<endl;
}

int main(){
  errorFun(); // exited, floating point exception
  return 0;
}
