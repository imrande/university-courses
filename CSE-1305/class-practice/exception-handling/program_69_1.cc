#include<iostream>
using namespace std;

class GenericError{
  int number;
  public:
    GenericError(int x){
      number = x;
    }

    void Errors(){
      try {
        throw number;
      } catch(...){
        cout << "Error Raised" <<endl;
      }
    }
};

int main(){
  GenericError generic(5);
  generic.Errors();
}
