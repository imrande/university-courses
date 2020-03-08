// Write a c++ program to illustrate the concept of annonymous object...

#include <iostream>
using namespace std;

class Num{
  public:
  int num;
  Num(){
    cout << "Enter number: ";
    cin >>num;
    cout << num <<endl;
  }
};

int main(){
  Num();
}
