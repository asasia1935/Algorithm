import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int ee = 0, eb = 0;
        for(int i = 0; i < str.length() - 1; i++) {
            String sub = str.substring(i, i+2);
            if (sub.equals("ee")) {
                ee++;
            }
            if (sub.equals("eb")) {
                eb++;
            }
        }
        System.out.print(ee + " " + eb);
    }
}