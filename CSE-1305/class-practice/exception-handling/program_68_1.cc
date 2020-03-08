#include <iostream>
using namespace std;

void errorHandling(){
  int x, y;
  cout << "Enter 2 numbers ";
  cin >> x >> y;

  try {
    if (y == 0){
      throw y;
    }
    int result = x / y;
    cout << result <<endl;

  } catch(int y) {
    cout << "Number can't divided by zero";
  }
}

int main(){
  errorHandling();
  return 0;
}
