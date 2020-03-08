#include <iostream>
using namespace std;

void my_terminateFunction(){
  cout << "Uncaught error handle" <<endl;
}

int main(){
  is_terminate(my_terminateFunction);
  try {
    throw 5;
  } catch(char x){
    cout << "Testing Purpose" <<endl;
  }

  return 0;
}
