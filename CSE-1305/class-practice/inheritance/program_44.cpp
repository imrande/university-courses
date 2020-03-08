/*
Write a C++ Program to illustrate the concept of simple inheritance using pubic inheritance method
*/
#include <iostream>
using namespace std;

class FirstName{
  public:
    string first_name;
};

class LastName: public FirstName{
  public:
    string last_name;
};

int main(){
  LastName name;
  cout << "Please Provide your full name ";
  cin >> name.first_name;
  cin >> name.last_name;
  cout << "My Full Name is " <<name.first_name <<" "<<name.last_name <<endl;
}
