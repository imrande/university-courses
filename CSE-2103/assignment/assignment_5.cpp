// write a pseudocode for deleting an element from an array

/*
    BEGIN
		SET l = length of array
		SET n = l
		
		WHILE n > position then
			SET array[p] = array[p + 1]
			Increment p
		ENDWHILE
		
		Decrement l
		
		Print array
	END
*/

#include <iostream>
using namespace std;

int main(){
	int x[] = {10, 20, 30, 40};
	int p = 3; // position
	int l = sizeof(x) / sizeof (int);
    int n = l;
	
  while (n > p){
    x[p] = x[p + 1];
    p += 1;
  }

	l -= 1;
	
  for (int i = 0; i < l; i++){
    cout << x[i] << " "; // 10 20 30
  }
  cout <<endl;
}
