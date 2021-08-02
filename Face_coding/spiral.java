import java.util.Scanner;

public class spiral {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int j = 0;
        for (int i = 0; i < x; i++) {
            if (i % 2 == 0) {
                int a = j + 1;
                int b = j + 2;
                j = j + 2;
                System.out.println(a + " " + b);
            } else {
                int a = j + 1;
                int b = j + 2;
                j = j + 2;
                System.out.println(b + " " + a);
            }
        }
        sc.close();
    }
}
