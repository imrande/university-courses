// write a program in c++ to overload unary operator ++ using member fn method

#include <iostream>
using namespace std;

class Demo{
  private:
    int x, y, z;
  public:
    Demo(int number1, int number2, int number3){
      x = number1;
      y = number2;
      z = number3;
    }

    void show(){
      cout << "The numbers are "<< x <<" " << y << " "<< z<<endl;
    }

    void operator++(){
      x += 5;
      y += 10;
      z += 15;

      cout << "The numbers are "<< x <<" " << y << " "<< z <<endl;
    }
};

int main(){
  Demo demo(5, 10, 15);
  cout << "Before unary operator invoked "<<endl;
  demo.show();
  cout << "After unary operator invoked "<<endl;
  demo.operator++();
}
