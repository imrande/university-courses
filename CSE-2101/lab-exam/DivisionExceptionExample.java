import java.util.Scanner;

public class DivisionExceptionExample {
    public static void main(String[] args){
        int a, b, r;
        Scanner input_ = new Scanner(System.in);
        a = input_.nextInt();
        b = input_.nextInt();
        // input_.close();

        try {
            r = a / b;
            System.out.println(r);
        } catch (ArithmeticException e) {
            System.out.println("Number can't divide by zero");
        }
        System.out.println("Programs ends here");
    }
}