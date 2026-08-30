import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String strA = sc.next();
        String strB = sc.next();
        while(strA.contains(strB)) {
            strA = strA.replace(strB, "");
        }
        System.out.print(strA);
    }
}