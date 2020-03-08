// write a program where you can use recursive sub function

#include <stdio.h>

int fact(int n){
    if (n == 1){
        return 1;
    } else {
        return n*fact(n-1);
    }
}

int main(){
    printf("Factorial number is %d\n",fact(5));
}

