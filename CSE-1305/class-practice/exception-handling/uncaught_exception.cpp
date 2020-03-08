/*
Uncaught Exception happends when it doesn't find any matching catch block or any generic catch block

when an appropriate exception handler is not defined and exception raised then terminate() fn get
invoked which implicitly called abort() fn
*/

// Example
#include <iostream>
using namespace std;

int main(){
  try{
    throw "Imran";
  }catch(int number){
    cout << "Uncaught Exception" <<endl;
  }
}
