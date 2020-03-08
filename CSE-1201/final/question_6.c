/*
	Write a program where you can use 2 sub functions. Between those functions,one 
	function may not return value and this function may call in other function...
*/

#include <stdio.h>

void sum();
void info();

int main(){
	info();
}

void sum(){
	int x = 10;
	int y = 50;
	printf("Sum is %d", x + y);
}

void info(){
	sum();
}
