class Base {
    public int a, b;

    Base(){

    }

    Base(int x, int b){
        a = x;
        this.b = b;
    }

    void display(){
        System.out.println(a + " , " + b);
    }
}

class Derived extends Base {
    int c, d;

    Derived(){}

    Derived(int x, int b, int y, int d){
        super(x, b);
        c = y;
        this.d = d;
    }

    @Override
    void display(){
        super.display();
        System.out.println(c + ", " + d);
    }
}

public class ThisUpper {
    public static void main(String[] args){
        Derived d = new Derived(2, 3, 4, 5);
        d.display();
    }
}