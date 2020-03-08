// Write a c++ program to illustrate the concept of static obj

#include <iostream>
using namespace std;

class SumofNatural {
  static int num;

  public:
  static void sum_of_num(){
    int sum = num * (num+1) / 2;
    cout << sum <<endl;
  }
};

int SumofNatural:: num = 5;

int main(){
  static SumofNatural sum;
  sum.sum_of_num();
}
