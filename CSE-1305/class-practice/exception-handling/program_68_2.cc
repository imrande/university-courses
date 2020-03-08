#include <iostream>
using namespace std;

void Error(){
  int x = -1;

  cout << "Before try" <<endl;
  try {
    cout << "Inside try block" <<endl;
    if (x < 0){
      throw x;
      cout << "After throw" <<endl;
    }
  } catch(int x) {
    cout << "Exception caught" <<endl;
  }

  cout << "After catch (Will be executed)";
}

int main(){
  Error();
  return 0;
}
