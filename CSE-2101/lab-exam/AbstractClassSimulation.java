import java.util.Scanner;

abstract class Example1 {
    void display1(){
        System.out.println("Example 1");
    }
    abstract void display2();
    abstract void display3();
}

abstract class Example2 extends Example1 {
    @Override
    void display2(){
        System.out.println("Example 2");
    }
}

class Example3 extends Example2 {
    int x;
    String name;
    Example3(String name, int a){
        x = a;
        this.name = name;
    }

    Example3(){}

    void display3(){
        System.out.print(name + " " + x + ", ");
    }
}

public class AbstractClassSimulation {
    public static void main(String[] args) {
        Example3 ee = new Example3();
        ee.display1();
        ee.display2();

        Example3 e1[] = new Example3[10];
        Scanner input_ = new Scanner(System.in);
        int a;
        String name;
        System.out.println("Enter name and age: ");

        for(int i = 0; i < 4; i++){
            name = input_.next();
            a = input_.nextInt();
            e1[i] = new Example3(name, a);
        }
        input_.close(); // close the scanner

        for(int i = 0; i < 4; i++){
            e1[i].display3();
        }
        System.out.println("\b.");
    }
}