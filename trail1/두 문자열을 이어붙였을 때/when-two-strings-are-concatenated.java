import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String strA = sc.next();
        String strB = sc.next();
        if ((strA + strB).equals(strB + strA)) {
            System.out.print("true");
        } else {
            System.out.print("false");
        }
    }
}