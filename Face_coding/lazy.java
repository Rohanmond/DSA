import java.util.*;

public class lazy {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        s = s.replaceAll("\\s", " ");
        s = s.toLowerCase();
        StringBuffer sb = new StringBuffer();
        char[] alphabets = new char[] { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
                'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
        for (var it : alphabets) {
            if (!s.contains(Character.toString(it)))
                sb.append(it);
        }
        for (var t : sb.toString().toCharArray()) {
            System.out.print(t + " ");
        }
        System.out.println();
        sc.close();
    }
}
