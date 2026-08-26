import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < N; i++) {
            String str = sc.next();
            cnt1 += str.length();
            if (str.charAt(0) == 'a') {
                cnt2++;
            }
        }
        System.out.print(cnt1 + " " + cnt2);
    }
}