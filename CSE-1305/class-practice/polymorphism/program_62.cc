/*
binary oeprator overlaoding using friend function syntax =>
class <class_name>{
  access specifier:
    data member;

    friend class_name operator <operator_symbol>(arg){

  }
};
*/

// write a program in c++ to overload binary operator '-' using friend fn method
#include <iostream>
using namespace std;

class baseClass{
  int x;
  public:
    baseClass(){}
    baseClass(int xx){x = xx;}
    void show(){
      cout << x <<endl;
    }

    friend baseClass operator-(baseClass &ob, baseClass &obj){
      baseClass bc;
      bc.x = obj.x - ob.x;
      return bc;
    }
};

int main(){
  baseClass base(5);
  baseClass base2(10);
  baseClass bc;
  bc = operator-(base2, base);
  bc.show();
}
