/*
write a program in c++ to illustrate the concept of exception handling mechanism

try: represents a block of code that can throw an exception.
catch: represents a block of code that is executed when a particular exception is thrown.
throw: Used to throw an exception. Also used to list the exceptions that a function throws, but doesn’t handle itself.
*/

#include <iostream>
using namespace std;

int main(){
  try{
    int x = 5;
    throw x;
  }
  catch(int x ){
    cout << "Testing Purpose";
  }

  return 0;
}
