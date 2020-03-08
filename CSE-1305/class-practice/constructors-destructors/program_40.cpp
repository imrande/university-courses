// Write a C++ Program to illustrate the concept of copy constructor

// which is referes object as its arguments is known as copy constructor

#include <iostream>
using namespace std;

class Number{
  private:
    int num;
  public:
    Number(int a, int b, int c){ // parameterized constructor
      num = a - b + c;
    }

    Number(Number &obj){ // copy constructor
      num = obj.num;
    }

    void display(){
      cout << num <<endl;
    }
  ~Number(){}
};

int main(){
  Number num2(70, 40, 60);
  Number num4(num2);

  num2.display();
  num4.display();
}
