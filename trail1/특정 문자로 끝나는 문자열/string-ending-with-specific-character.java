import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String[] strings = new String[10];
        for(int i = 0; i < 10; i++) {
            strings[i] = sc.next();
        }

        char c = sc.next().charAt(0);
        boolean b = false;

        for(int i = 0; i < 10; i++) {
            if (strings[i].charAt(strings[i].length() - 1) == c) {
                System.out.println(strings[i]);
                b = true;
            }
        }
        if (!b) {
            System.out.print("None");
        }
    }
}