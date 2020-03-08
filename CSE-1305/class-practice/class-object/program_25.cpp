/*
  Write a program in C++ to enter the details of a student and display them using class
  and object. The details should be private in nature and use public member function to acess
  the private members
*/

#include <iostream>
using namespace std;

class Student {
  private:
    string name, dept, id;
    int semester;
    float cgpa;

    void input(){
      cout << "Enter the students details [Name | Dept | Id | Semester | CGPA] ";
      cin >> name >> dept >> id >> semester >> cgpa;
    }

  public:
    void display(){
      input(); // invoke the input fn
      cout << "The Student details below " <<endl;
      cout << "Name " <<name <<endl;
      cout << "Department " <<dept <<endl;
      cout << "Id " <<id <<endl;
      cout << "Semester " <<semester <<endl;
      cout << "CGPA " <<cgpa <<endl;
    }
};

int main(){
  Student student;
  student.display(); // output of the student class
  return 0;
}
