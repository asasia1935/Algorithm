import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        String sub = sc.next();
        int cnt = 0;
        for(int i = 0; i < str.length() - 1; i++) {
            String substr = str.substring(i, i+2);
            if (substr.equals(sub)) {
                cnt++;
            }
        }
        System.out.print(cnt);
    }
}