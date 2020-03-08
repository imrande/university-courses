// Write a program based on the concept of array of objects for a class...

#include <iostream>
using namespace std;

class Student {
  private:
    string name, id, dept;
    int semester;
    float cgpa;

  public:
    void input(){
      cout << "Enter student Details" <<endl;;
      cout << "Name: ";
      cin >> name;
      cout << "Id: ";
      cin >> id;
      cout << "Department: ";
      cin >> dept;
      cout << "Semester: ";
      cin >> semester;
      cout << "CGPA: ";
      cin >> cgpa;
    }

    void display(){
      cout << "Student Details " <<endl;
      cout << "Name: " <<name <<endl;
      cout << "Id: " <<id <<endl;
      cout << "Department: " <<dept <<endl;
      cout << "Semester: " <<semester <<endl;
      cout << "CGPA: " <<cgpa <<endl;
    }
    // Destructor
  ~Student(){}
};

int main(){
  Student student[2];
  for(int i = 0; i < 2; i++){
    student[i].input();
  }

  for(int i = 0; i < 2; i++){
    student[i].display();
  }
}
