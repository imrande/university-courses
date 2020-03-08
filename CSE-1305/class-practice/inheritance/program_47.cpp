/*
Write a C++ Program to explain the use of protected data in private inheritance...

protected specifier is same as private specifier but they allow private data member directly in derived
class without public member fn.. Actually protected specifier is public for base class and private
for other class
*/

#include <iostream>
using namespace std;

class A{
  protected:
    string name = "Madina";
};

class B: private A{
  public:
    void display(){
      cout << name <<endl;
    }
};

int main(){
  B b;
  b.display();
}
