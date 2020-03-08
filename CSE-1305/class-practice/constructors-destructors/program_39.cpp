// Write a C++ Program to illustrate the concept of constructor with default
// arguments... [Sum of natural num | (n*(n+1))/2 ]

#include <iostream>
using namespace std;

class NaturalNumber{
  private:
    int number;
  public:
    NaturalNumber(int num = 15){ // constructor with default arguments
      number = num;
    }

    void displaySum(){
      int result = (number * (number + 1)) / 2;
      cout << "Sum of number "<<number << " is " << result << endl;
    }
};

int main(){
  NaturalNumber natural_number;
  natural_number.displaySum();
  return 0;
}
