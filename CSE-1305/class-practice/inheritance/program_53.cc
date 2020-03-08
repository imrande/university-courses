/* 
Multipath Inheritance =>
combination of one base class with more than one derived class and all derived class inheritance new single class
*/

#include <iostream>
using namespace std;

class Vehicle {
	
};

class Car: public Vehicle {
	
};

class Bus: public Vehicle {
	
};

class Car2: public Car, public Bus {
	public: 
		Car2(){
			cout << "This is called multipath inheritance" <<endl;
		}
};

int main(){
	Car2 obj;
	return 0;
}