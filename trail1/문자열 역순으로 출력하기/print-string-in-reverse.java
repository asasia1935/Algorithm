import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String[] strings = new String[4];
        for(int i = 0; i < 4; i++) {
            strings[i] = sc.next();
        }
        
        for(int i = 0; i < 4; i++) {
            System.out.println(strings[3 - i]);
        }
    }
}