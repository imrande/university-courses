// write a pseudocode for a factorial number

/*
    fact(n)
    BEGIN
        IF n == 0 or 1 then
            return 1;
        ELSE
            return n * fact(n-1)
        ENDIF
    END 
*/

#include <iostream>
using namespace std;

int main(){
    int number = 10;
    long int fact = 1;
    int count = 1;

    while (number >= count){
        fact *= count;
        count += 1;
    }
    cout << "The factorial of number " <<number <<" is " << fact << endl; // 3628800
}
