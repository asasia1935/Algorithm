import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        System.out.print(str.substring(1, str.length()) + str.substring(0, 1));
    }
}