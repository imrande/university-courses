package javaapplication15;
import java.util.Scanner;
public class JavaApplication15 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.print("Enter number: ");
        int n = input.nextInt();
        int a[] = new int[n];
        System.out.println("Enter number for array: ");
        for(int i = 0; i < n; i++){
            a[i] = input.nextInt();
        }
        
        System.out.println("Content of Array: ");
        for(int i = 0; i < n; i++){
            System.out.print(a[i] + " ");
        }
        System.out.print("\nEnter the item for search: ");
        int x = input.nextInt();
        int loc = 0;
        
        for(int i = 0; i< n; i++){
            if (a[i] == x){
                loc = i + 1;
                break;
            }
        }
        
        if(loc == 0){
            System.out.println("Nope");
        }
        System.out.println(x + " Found at " + loc);
    }
    
}
