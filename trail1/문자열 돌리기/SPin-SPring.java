import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        for(int i = 0; i < str.length() + 1; i++) {
            System.out.println(str);
            str = str.substring(str.length() - 1) + str.substring(0, str.length() - 1);
        }
    }
}