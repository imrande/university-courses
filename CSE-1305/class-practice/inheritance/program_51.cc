/* 
https://www.geeksforgeeks.org/inheritance-in-c/
HyBrid Inheritance =>
the proper combination of one or more type of inheritance happening together is known as hybrid inheritance

combining more than one type of inheritance is called hybrid inheritance
*/

// write a program in c++ to explain the process of hybrid inheritance

#include <iostream>
using namespace std;

// base class
class Vehicle {
	public:
		Vehicle(){
			cout << "This is Vehicle class"<<endl;
		}
};

// base class
class Aeroplane {
	public:
		Aeroplane(){
			cout << "This is Aeroplane class"<<endl;
		}
}; 

// sub class => Hierarchical  + Multiple
class Bus: public Vehicle, public Aeroplane {
	
};

// sub class => Hierarchical  + Multiple
class Boeing747: public Vehicle, public Aeroplane {
	
};

int main(){
	Bus bus;
	Boeing747 boeing;
}