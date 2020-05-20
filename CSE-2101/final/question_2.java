// What is the difference between method overriding and method overloading? Explain with example.

In a class hierarchy, when a method in a subclass has the same name and type signature
as a method in its superclass, then the method in the subclass is said to override the method
in the superclass, and this process is called method overriding.

On the other hand, when multiple methods have the same name, but different type
signatures, then the methods are said to be overloaded, and this process is called method
overloading.

Example: 

class A {
	int a;
	
	void display(){
		System.out.println(a);
	}
}

class B extends A {
	int b;
	
	void setVal(int x){
		b = x;
	}
	
	void setVal(int x, int y){
		super.a = x;
		b = y;
	}
	
	void display(){
		System.out.println(b);
	}
}

In the above example, the display() method in class B has the same name and
type signature as the display() method in class A. So, the display() method in
class B overrides the display() method of class B. On the contrary, the
setVal() methods in class Bhave the same name, but different signatures. So, they are
overloaded.

Again, overloading defines a similar operation in different ways for different data,
whereas overriding defines a similar operation in different ways for different object types.