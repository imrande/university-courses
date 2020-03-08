/*
  Write a program in C++ to enter the details of a student and display them using class
  and object. The details should be private in nature and use public member function to acess
  the private members... The member function must be defined inside class
*/

// Member function inside class
#include <iostream>
using namespace std;

class Student {
  public:
    string name, dept, id;
    int semester;
    float cgpa;

  void input(){
    cout << "Enter the students details [Name | Dept | Id | Semester | CGPA] ";
    cin >> name >> dept >> id >> semester >> cgpa;
  }
};

int main(){
  Student student;
  student.input();
  cout << "The Student details below " << endl;
  cout << "Name " <<student.name <<endl;
  cout << "Department " <<student.dept <<endl;
  cout << "Id " <<student.id <<endl;
  cout << "Semester " <<student.semester <<endl;
  cout << "CGPA " <<student.cgpa <<endl;
}
