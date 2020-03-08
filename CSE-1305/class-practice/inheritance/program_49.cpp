/*
Multilevel Inheritance =>
when the process of single inheritance is extended up to minimum 2 levels, the concept is known as Multilevel Inheritance...
*/

// write a c++ program to add 2 integers multilevel inheritance 
#include <iostream>
using namespace std;

class One {
	protected:
		int number_1 = 50;
};

class Two : public One {
	protected:
		int number_2 = 50;
};

class Three: public Two {
	public:
		void show(){
			int Sum = number_1 + number_2;
			cout << "Sum is " << Sum <<endl;
		}
};

int main(){
	Three three;
	three.show();
}