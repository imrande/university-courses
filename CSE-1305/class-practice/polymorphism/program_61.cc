// write a program in c++ to overload binary operator '+' using member function method

#include <iostream>
using namespace std;

class DemoClass{
  int number1, number2;
  public:
    DemoClass(){
      number1 = 0;
      number2 = 0;
    }

    DemoClass(int x, int y){
      number1 = x;
      number2 = y;
    }

    void showResult(){
      cout << number1 <<endl;
      cout << number2 <<endl;
    }

    DemoClass operator+(DemoClass &obj){
      DemoClass d3;
      d3.number1 = number1 + obj.number1;
      d3.number2 = number2 + obj.number2;
      return d3;
    }
};

int main(){
  DemoClass d1(4, 5);
  DemoClass d2(10, 45);
  cout << "D1 "<<endl;
  d1.showResult();
  cout << "D2 "<<endl;
  d2.showResult();
  DemoClass d3;
  d3 = d1+ d2;
  cout << "D3 "<<endl;
  d3.showResult();
}
