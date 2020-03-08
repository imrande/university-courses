// write a c++ program to overload binary operator '+' using member function method

#include <iostream>
using namespace std;

class Demo{
  int number1, number2;

  public:
    Demo(){
      number1 = 0;
      number2 = 0;
    }

    Demo(int x, int y){
      number1 = x;
      number2 = y;
    }

    Demo operator+(Demo &obj){
      Demo d3;
      d3.number1 = number1 + obj.number1;
      d3.number2 = number2 + obj.number2;
      return d3;
    }

    void display(){
      cout <<"Number 1: "<<number1<<endl;
      cout <<"Number 2: "<<number2<<endl;
    }
};

int main(){
  Demo d1(2, 3);
  Demo d2(4, 5);
  Demo d3;
  d3 = d1 + d2;
  cout << "Object C1"<<endl;
  d1.display();
  cout << "Object C2"<<endl;
  d2.display();
  cout << "Object C3"<<endl;
  d3.display();
}
