import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int num = sc.nextInt();
        for(int i = 0; i < num; i++) {
            int type = sc.nextInt();
            char[] chars = str.toCharArray();
            if (type == 1) {
                int a = sc.nextInt();
                int b = sc.nextInt();
                char ca = chars[a - 1];
                chars[a - 1] = chars[b - 1];
                chars[b - 1] = ca;
            } else if (type == 2) {
                char x = sc.next().charAt(0);
                char y = sc.next().charAt(0);
                for(int j = 0; j < str.length(); j++) {
                    if (chars[j] == x) {
                        chars[j] = y;
                    }
                }
            }
            str = String.valueOf(chars);
            System.out.println(str);
        }
    }
}