import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int idx = str.indexOf("e");
        if (idx == 0) {
            System.out.print(str.substring(1));
        } else if (idx == str.length() - 1) {
            System.out.print(str.substring(0, idx));
        } else if (idx > 0) {
            System.out.print(str.substring(0, idx) + str.substring(idx + 1));
        }
    }
}