// write a program where you can use 2D array. where you may find the odd number from the said array...

#include <stdio.h>

void _2d_array();

int main(){
    _2d_array();
    return 0;
}

void _2d_array(){
    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    int i, j;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if (a[i][j] % 2 != 0){
                printf("Odd number is %d\n",a[i][j]);
            }
        }
    }
}