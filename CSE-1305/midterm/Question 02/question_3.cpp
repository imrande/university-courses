// write a program based on the concept of constructor overloading...

#include <iostream>
using namespace std;

class Student{
  int x, y;
  public:
    // constructor
    Student(int a, int b){
      x = a;
      y = b;
    }

    // overloading
    Student(int aa){
      x = aa;
      y = 0;
    }

    void display(){
      int res = x + y;
      cout << res <<endl;
    }
};

int main(){
  Student student(5, 10);
  student.display();
  Student student_2(155);
  student_2.display();
}
