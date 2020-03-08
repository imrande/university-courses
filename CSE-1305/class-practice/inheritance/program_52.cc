/*
Hierarchical Inheritance => 
more than one sub class is inherited from a single base(super) class

One base class can create more than one derived class, this concept is hierarchical inheritance
*/

// write a program in c++ to illustrate the concept of hierarchical inheritance

#include <iostream>
using namespace std;

class Vehicle {
	
};

// first sub class from Vehicle super class
class Car: public Vehicle {
	public:
		Car(){
			cout << "This is Car Class "<<endl;
		}
};

// seciond sub class from Vehicle super class
class Bus: public Vehicle {
	public:
		Bus(){
			cout << "This is Bus Class "<<endl;
		}
};

// third sub class from Vehicle super class
class Truck :public Vehicle {
	public:
		Truck(){
			cout << "This is Truck Class "<<endl;
		}
};

int main(){
	Truck obj_1;
	Bus obj_2;
	Car obj_3;
}