// Is it possible to partially implement an interface? Justify your answer with example.

Yes, it is possible to partially implement an interface by declaring the implementing class
as abstract

Example:

interface Characteristics {
	boolean hasArea();
	boolean hasVolume();
	boolean is2D();
	boolean is3D();
}

abstract class Figure implements Characteristics {
	int dim1, dim2;
	
	public boolean is2D(){
		return true;
	}
}

In the above example, class Figure partially implemented the interface Characteristics by
implementing only one method from it. However, class Figure must be declared as abstract
and any class that will inherit Figure must implement the remaining methods declared in the
interface ‘Characteristics’