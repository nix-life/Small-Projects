/*
1.2 Fibonacci Sequence
Enter a number and have the program generate the Fibonacci sequence to that
number or to the Nth number.
 */

import java.util.Scanner;

public class fibonacci {
    public static int fib_recursion(int n) {
        if (n == 0) return 0;
        else if (n == 1) return 1;
        else {
            return fib_recursion(n - 1) + fib_recursion(n - 2);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Please enter a number: ");
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            System.out.println(fib_recursion(i));
        }
    }
}
