// A program to explain generic catch block

#include<iostream>
using namespace std;

int main(){
  try {
    throw 5;
  } catch (int x){
    cout << "Number Error" <<endl; // this gonna print
  } catch (...){
    cout << "Default Error" <<endl;
  }
  return 0;
}
