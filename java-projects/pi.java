import java.util.*;
import java.io.*;

public class pi {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
      BigDecimal big = new BigDecimal(22.0);
	    BigDecimal big2 = new BigDecimal(7.0);

      System.out.println("To how many decimal places do you want to print PI?");
		  int n = readInt();
		
		  if (n < 32627) {
			  System.out.println(b1.divide(b2, n, BigDecimal.ROUND_UP));
		  else
			  System.out.println("Limit exceeded !!!");
    } static String next () throws IOException {
        while (st == null || ! st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }
    static long readLong () throws IOException {
        return Long.parseLong(next());
    }
    static int readInt () throws IOException {
        return Integer.parseInt(next());
    }
    static double readDouble () throws IOException {
        return Double.parseDouble(next());
    }
    static char readCharacter () throws IOException {
        return next().charAt(0);
    }  
    static String readLine () throws IOException {
        return br.readLine().trim();
    }
}
