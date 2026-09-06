import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        String req = sc.next();
        for(int i = 0; i < req.length(); i++) {
            if (req.charAt(i) == 'L') {
                str = str.substring(1, str.length()) + str.substring(0, 1);
            } else if (req.charAt(i) == 'R') {
                str = str.substring(str.length() - 1) + str.substring(0, str.length() - 1);
            }
        }
        System.out.print(str);
    }
}