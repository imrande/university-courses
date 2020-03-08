// write a pseudocode for inserting an element into an array

/*
    BEGIN
        SET l = length of array
        SET n = l

        WHILE n >= position then
            SET array[n + 1] = array[n]
            decrement n
        ENDWHILE

        SET array[position] = value
        Increment l

        Print array
    END
*/

#include <iostream>
using namespace std;

int main(){
	int x[] = {10, 20, 30, 40, 50};
	int length = sizeof(x) / sizeof(int);
	int p = 2; // position [ start from 0 index ]
	int v = 25; // value
	int n = length; // number of elements

	while (n >= p){
		x[n + 1] = x[n];
		n -= 1;
	}

	x[p] = v;
	length += 1;

	for (int i = 0; i < length; i++){
		cout << x[i] << " "; // 10 20 25 30 40 50
	}
}

