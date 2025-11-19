/*
1.1 Find PI to the Nth Digit
Enter a number and have the program generate PI up to that many decimal
places. Keep a limit to how far the program will go.
*/

import java.math.BigDecimal;
import java.math.MathContext;
import java.math.RoundingMode;
import java.util.Scanner;

public class pi {

    public static BigDecimal computePi(int digits) {
        
        MathContext mc = new MathContext(digits + 5, RoundingMode.HALF_UP);

        BigDecimal sum = BigDecimal.ZERO;
        BigDecimal C = new BigDecimal("426880").multiply(sqrt(new BigDecimal("10005"), mc));

        for (int k = 0; k < 20; k++) { // Increase if more precision is needed
            BigDecimal numerator = factorial(6 * k).multiply(new BigDecimal(545140134 * k + 13591409));
            BigDecimal denominator = factorial(3 * k)
                    .multiply(factorial(k).pow(3))
                    .multiply(BigDecimal.valueOf(-262537412640768000L).pow(k));

            sum = sum.add(numerator.divide(denominator, mc));
        }

        BigDecimal pi = C.divide(sum, mc);
        return pi.round(new MathContext(digits, RoundingMode.HALF_UP));
    }

    public static BigDecimal sqrt(BigDecimal A, MathContext mc) {
        BigDecimal x0 = new BigDecimal("0");
        BigDecimal x1 = new BigDecimal(Math.sqrt(A.doubleValue()));
        while (!x0.equals(x1)) {
            x0 = x1;
            x1 = A.divide(x0, mc);
            x1 = x1.add(x0);
            x1 = x1.divide(BigDecimal.valueOf(2), mc);
        }
        return x1;
    }

    public static BigDecimal factorial(int n) {
        BigDecimal result = BigDecimal.ONE;
        for (int i = 2; i <= n; i++) {
            result = result.multiply(BigDecimal.valueOf(i));
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of decimal places (max depends on RAM): ");
        int n = sc.nextInt();
        sc.close();

        if (n > 10000) {
            System.out.println("Warning: High values will require LOTS of memory and time!");
        }

        BigDecimal pi = computePi(n);
        System.out.println("\nPi to " + n + " digits:");
        System.out.println(pi);
    }
}
