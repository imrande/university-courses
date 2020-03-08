// Write a C++ Program to illustrate the concept of explicit call to a constructor

#include <iostream>
using namespace std;

class Sample {
  private:
    int n1;

  public:
    Sample(){
      n1 = 5;
      cout << n1 <<endl;
    }

    Sample(int x){
      n1 = x;
      cout << n1 <<endl;
    }
  ~Sample(){}
};

int main(){
  // Direct call
  Sample();
  Sample(20);
}
