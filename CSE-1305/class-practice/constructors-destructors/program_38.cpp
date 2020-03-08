// Write a C++ Program to illustrate the concept of constructor overloading...
// Area calculation

#include <iostream>
using namespace std;

class Area{
  private:
    int length, breadth;
  public:
    Area(){
      length = 5;
      breadth = 2;
    }

    Area(int l, int b){
      length = l;
      breadth = b;
    }

    int areaCalculation(){
      return length * breadth;
    }

    void getArea(){
      cout << "Area is " << areaCalculation() << endl;
    }
    ~Area(){}
};

int main(){
  Area area1, area2(2, 1);
  area1.getArea();
  area2.getArea();
  return 0;
}
