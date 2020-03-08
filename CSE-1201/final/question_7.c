// write a recursive function

#include <stdio.h>

int factorial_number(int n);

int main(){
	int res = factorial_number(5);
	printf("Factorial Number is %d\n",res);
}

int factorial_number(int n){
	if (n == 1){
		return 1;
	} else {
		return n * factorial_number(n - 1);
	}
}