// Write a pseudocode to find the max number from an linear array?

/*
    BEGIN
        SET max to array[0]
        FOR i = 1 to array length
            IF array[i] > max
                SET max to array[i]
            ENDIF
        ENDFOR
        Print max
    END
*/

#include <iostream>
using namespace std;

int main(){
    int numbers[] = {10, 20, 30};
    int length = sizeof(numbers) / sizeof(int);
    int max = numbers[0];
    int count = 0;

    while (length > count){
        max = numbers[count];
        count += 1;
    }
    cout << "The max number is " << max << endl; // 30
}