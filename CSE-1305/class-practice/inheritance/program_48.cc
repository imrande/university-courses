// write a program in c++ to add two integer single inheritance

#include <iostream>
using namespace std;

class DemoClass {
  protected:
	  int x, y;
	
	public:
		void inputValue(){
			cout << "Enter 2 number ";
			cin >> x >> y;
		}
};

class DemoInheritClass: public DemoClass {
	public:
		void displayValue(){
			int Sum = x + y;
			cout << "Sum is " << Sum <<endl;
		}
};

int main(){
	DemoInheritClass demo_inherit_class;
  demo_inherit_class.inputValue();
	demo_inherit_class.displayValue();
}
