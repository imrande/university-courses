// print the output of the following code:

// 3(A) 
#include <stdio.h>
#include <conio.h>

int main(){
    printf("Enter the value: ");
    int x;
    scanf("%d", &x);
    printf("Function result is %d\n", show(x));
    
    printf("Enter the value: ");
    int y;
    scanf("%d", &y);
    printf("Function result is %d\n", show(y));
    getch();
}

int show(int d){
    d+=10;
    int k = (++d) + (d++);
    return k;
}

/*
Enter the value: 10                                                                                                            
Function result is 43                                                                                                          
Enter the value: 5                                                                                                             
Function result is 33 
*/

// 3(B)
#include <conio.h>
#include <stdio.h>

int main(void) {
    int x,y,z;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("Enter the value of z: ");
    scanf("%d", &z);
    
    show();
    get(z,x);
    printf("\nResult2 = %d",set(4,6,8));
    
    getch();
    return 0;
}

void get(int a, int b){
  printf("\nm = %d \nn = %d",b,a);
}

int set(int a, int b, int c) {
    int k = a + b - c;
    return k;
}

void show(){
    printf("\nResult = %d",set(10,10,10));
}

/*
Enter the value of x: 2                                                                                                          
Enter the value of y: 4                                                                                                          
Enter the value of z: 6
                                                                                                          
Result = 10                                                                                                                      
m = 2                                                                                                                            
n = 6                                                                                                                            
Result2 = 2 
*/