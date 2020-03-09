# Data-Structure

## What is Data Structure?

Data structure is a method of organizing large amounts of data more efficiently so that
any operation on that data becomes easy.

### 3 Basic Criteria of data structure.

* Every data structure is well defined.
* Every data structure has a basic principle.
* Every data structure is used to large amounts of data.

## Classification of data structure based on organization.

* Linear data structure
	* A data structure is said to be linear if its elements form a sequence or linear list.
	Example - Arrays, linked list, stacks, queues

* Non-linear data structure
	* A data structure is said to be non-linear if its elements are arranged not in a sequence.
Example - Graphs, Trees, Heaps

## Major operations in data structure

1. Inserting
2. Deleting
1. Merging
1. Updating
1. Soting
1. Searching

* **strlen( )** <br>
Syntax : `int strlen(char* string)` <br>
It is declared inside the header file string.h
It accepts arguments of type pointer to char or char*. So u can pass either string literal or
an array of characters. It returns the number of char in the string including null character.

* **strcpy( )** <br>
Syntax : `char strcpy(char* destination, char* source)` <br>
It is declared inside the header file string.h.
This function is used to copy the string. It copies the string pointed to by the source in
the destination. It accepts 2 arguments of type pointer to char or char*. So u can pass
either string literal or an array of characters. It returns pointer to the first string

* **strcmp( )** <br>
Syntax : `char strcmp(char* str1, char*str2)` <br>
It is declared inside the header file string.h
This function is used to compare two strings. It accepts 2 arguments of type pointer to
char or char*. It returns 0 if 2 strings are the same otherwise it returns non-zero value.

* **substr( )** <br>
Syntax : `char* substr(char* string, int m, int)` <br>
This function is declared inside the header file stdlib.h
This function accepts 3 arguments. 1st is string literal and 2nd and 3rd is int . It returns
the substring of the given string starting at position m and end at position n-1

* **strrev( )** <br>
Syntax : `char* strrev(char* string)` <br>
It is declared inside the header file string.h
It is used to reverse the given string. It accepts arguments of type pointer to char or
char*. It returns reverse string output of the given string

* **strcat( )** <br>
Syntax : `char strcpy(char* str1, char* str2)` <br>
It is declared inside the header file string.h
It is used to concatenate two given strings. It accepts 2 arguments of type pointer to char
or char*. So u can pass either string literal or an array of characters. The null character of
the first string is removed and second string is appended at the end of 1st string.