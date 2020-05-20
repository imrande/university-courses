// Why should you use the keyword super in your java program? Explain with example

There are two cases where we should use the keyword super in a java program.
1. To call the constructor of the superclass.
2. To access the non-private fields and methods of the superclass. 

Example :

class A {
	int a;
	
	A(int x){
		a = x;
	}
	void display(){
		System.out.println(a);
	}
}

class B extends A{
	int b;
	
	B(int x, int y){
		super(x);
		b = y;
	}
	
	void display(){
		super.display();
		System.out.println(b);
	}
}

In the above example, insides class B, super(x) is used to call class A’s
constructor, and super.display() is used to access class A’s display() method.