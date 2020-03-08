/*
Multiple Inheritance =>
when a new class is derived from more than one base class, the concept is known as multiple inheritance
*/

// write a c++ program to add 2 integers multiple inheritance
#include <iostream>
using namespace std;

class One {
	protected:
		int x = 50;
};

class Two {
	protected:
		int y = 50;
};

class Three : public One, public Two {
	public:
		void ShowValue(){
			cout << "Sum is " << x + y <<endl;
		}
};

int main(){
	Three three;
	three.ShowValue();
}