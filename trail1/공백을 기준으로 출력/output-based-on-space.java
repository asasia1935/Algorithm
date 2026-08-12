import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String str1 = sc.nextLine();
        String str2 = sc.nextLine();
        
        str1 = str1.replace(" ", "");
        str2 = str2.replace(" ", "");

        System.out.print(str1 + str2);
    }
}