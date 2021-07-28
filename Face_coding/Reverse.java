package Face_coding;

import java.util.*;

public class Reverse {

    public static void main(String args[]) {
        // fill your code
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String revS = reverse(s);
        System.out.println(revS);
        if (revS.equals(s))
            System.out.println("It is same");
        else
            System.out.println("It is not same");
        sc.close();
    }

    private static String reverse(String s) {
        int len = s.length();
        char[] arr = s.toCharArray();
        int l = 0;
        int r = len - 1;
        while (l < r) {
            char temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }
        String res = new String(arr);
        return res;
    }

}
