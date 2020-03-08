#include <iostream>
using namespace std;

void multipleErrorCatch(){
  string name = "Imran";
  try {
    throw name;
  } catch (int x){
    cout << "Testing Number Error";
  } catch (string name){
    cout << "Testing String Error";
  }
}

int main(){
  multipleErrorCatch();
  return 0;
}
