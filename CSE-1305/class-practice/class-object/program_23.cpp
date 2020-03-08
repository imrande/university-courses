/*
  Write a program in C++ to enter the details of a student and display them using class
  and object. The details should be public in nature...
*/

#include <iostream>
using namespace std;

class Student {
  public:
    string name, dept, id;
    int semester;
    float cgpa;
};

int main(){
  Student student; // obj declare

  cout << "Enter the student details [Name | Dept | Id | Semester | CGPA] ";
  cin >> student.name >> student.dept >> student.id >> student.semester >> student.cgpa;

  cout << "The Student details below " << endl;
  cout << "Name " <<student.name <<endl;
  cout << "Department " <<student.dept <<endl;
  cout << "Id " <<student.id <<endl;
  cout << "Semester " <<student.semester <<endl;
  cout << "CGPA " <<student.cgpa <<endl;
}
