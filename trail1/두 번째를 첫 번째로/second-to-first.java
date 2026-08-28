import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        char[] chars = str.toCharArray();
        char c1 = chars[0];
        char c2 = chars[1];
        for(int i = 0; i < str.length(); i++) {
            if (chars[i] == c2) {
                chars[i] = c1;
            }
        }
        System.out.print(String.valueOf(chars));
    }
}