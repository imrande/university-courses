// write a pseudocode for check the number is prime or not?

/*
    BEGIN
        SET count to 0
        FOR i = 1 to number
            IF number % i == 0 then
                increment count value
            ENDIF
        ENDFOR

        IF count == 2 then
            print number is prime 
        ELSE
            print number is not prime
        ENDIF
    END
*/

#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int count = 0;

    for (int i = 0; i <= number; i++){
        if (number % i == 0){
            count += 1;
        }
    }

    if (count == 2){
        cout << number <<" is prime" << endl;
    }
}