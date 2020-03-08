// write a c++ program to explain function overloading

#include <iostream>
using namespace std;

void addTwoNumbers(int x){
  cout << "The Sum is " << x + 5 <<endl;
}

void addTwoNumbers(int x, int y){
  cout << "The Sum is " << x + y <<endl;
}

void addTwoNumbers(int x, int y, float z){
  cout << "The Sum is " << x + y + z <<endl;
}

void addTwoNumbers(float x, float y, float z, float m){
  cout << "The Sum is " << x + y + z + m <<endl;
}

int main(){
  addTwoNumbers(5);
  addTwoNumbers(5, 85, 10);
  addTwoNumbers(5, 15, 10.5);
  addTwoNumbers(5.5, 10.8, 9.5, 8.6);
}
