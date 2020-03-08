// Write a c++ program to overload unary operator++ using friend function method

#include <iostream>
using namespace std;

class baseClass {
  int number_1, number_2, number_3;

  public:
    baseClass(int x, int y, int z){
      number_1 = x;
      number_2 = y;
      number_3 = z;
    }

    void show(){
      cout << "Number_1: "<<number_1 <<endl;
      cout << "Number_2: "<<number_2 <<endl;
      cout << "Number_3: "<<number_3 <<endl;
    }

    friend void operator++(baseClass o1){
      o1.number_1 += 5;
      o1.number_2 += 10;
      o1.number_3 += 15;

      cout << "Number_1: "<<o1.number_1 <<endl;
      cout << "Number_2: "<<o1.number_2 <<endl;
      cout << "Number_3: "<<o1.number_3 <<endl;
    }
};

int main(){
  baseClass base_class_obj(40, 50, 60);
  cout << "The numbers are" <<endl;
  base_class_obj.show();
  cout << "The numbers after unary operator called "<<endl;;
  operator++(base_class_obj);
}
