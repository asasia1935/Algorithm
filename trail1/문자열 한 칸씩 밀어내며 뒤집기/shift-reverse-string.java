import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int n = sc.nextInt();
        for(int i = 0; i < n; i++) {
            int req = sc.nextInt();
            if (req == 1) {
                str = str.substring(1, str.length()) + str.substring(0, 1);
            } else if (req == 2) {
                str = str.substring(str.length() - 1) + str.substring(0, str.length() - 1);
            } else if (req == 3) {
                StringBuilder strbld = new StringBuilder(str);
                str = strbld.reverse().toString();
            }
            System.out.println(str);
        }
    }
}