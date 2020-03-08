// Write a C++ Program to illustrate the concept of Destructors

#include <iostream>
using namespace std;

class Sample{
  int num;

  public:
    Sample(){
      num = 10;
    }

    int res(){
      int n2 = num;
      return n2;
    }

  ~Sample(){}
};

int main() {
  Sample s;
  cout << s.res() <<endl;
  return 0;
}
