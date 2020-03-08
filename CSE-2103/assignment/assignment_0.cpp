// write a pseudocode for traversing linear array

/*
    BEGIN
        FOR i = 1 to length of array then
            print each element in the array
    END
*/

#include <iostream>
using namespace std;

int main(){
	int x[] = {10, 20, 30, 40};
	int l = sizeof(x) / sizeof (int);
  
  for (int i = 0; i < l; i++){
    cout << x[i] << " "; // 10 20 30 40
  }
}