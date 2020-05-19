/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.

Binary Search
 */
package javaapplication19;

import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author Students
 */
public class JavaApplication19 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.print("Enter number: ");
        int n = input.nextInt();
        int a[] = new int[n];
        System.out.println("Enter number for array: ");
        for(int i = 0; i < n; i++){
            a[i] = input.nextInt();
        }
        Arrays.sort(a);
        System.out.println("Content of Array: ");
        for(int i = 0; i < n; i++){
            System.out.print(a[i] + " ");
        }
        System.out.print("\nEnter the item for search: ");
        int x = input.nextInt();
        int loc = 0;
        int start = 0, e = n - 1;
        while (true){
            int mid = (int)(start + e) / 2;
            if (a[mid] == x){
                loc = mid;
                break;
            } else if (x < a[mid]){
                e = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        
        if(loc == 0){
            System.out.println("Nope");
        }
        System.out.println(x + " Found at " + loc);
    }
    }
    

