// write a c++ program to overload unary operator -- using friend fn method and operator function must be return

#include <iostream>
using namespace std;

class Demo{
  int x, y;

  public:
    Demo(int num1, int num2){
      x = num1;
      y = num2;
    }

    void show(){
      cout << "The numbers are " << x << " " << y <<endl;
    }

    friend Demo operator--(Demo o){
      o.x -= 5;
      o.y -= 10;
      return o;
    }
};

int main(){
  Demo demo(10, 20);
  cout << "Before invoked "<<endl;
  demo.show();
  cout << "After invoked " <<endl;
  demo = operator--(demo);
  demo.show();
}
