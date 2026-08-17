import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < N; i++) {
            int num = sc.nextInt();
            if (num == 2) {
                cnt2++;
            }
            if(cnt2 == 3) {
                cnt1 = i + 1;
                break;
            }
        }
        System.out.print(cnt1);
    }
}