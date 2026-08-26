import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int cnt = 0;
        double num = 0.0;
        String[] strings = new String[N];
        for(int i = 0; i < N; i++) {
            strings[i] = sc.next();
        }
        char c = sc.next().charAt(0);
        for(int i = 0; i < N; i++) {
            if (strings[i].charAt(0) == c) {
                cnt++;
                num += strings[i].length();
            }
        }
        double avg = num / cnt;
        System.out.printf("%d %.2f", cnt, avg);
    }
}