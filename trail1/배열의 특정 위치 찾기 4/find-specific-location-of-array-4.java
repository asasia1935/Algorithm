import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[10];
        int cnt = 0;
        for(int i = 0; i < 10; i++) {
            arr[i] = sc.nextInt();
            if (arr[i] == 0) {
                break;
            }
            cnt++;
        }
        int sum = 0;
        int cnt2 = 0;
        for(int i = 0; i < cnt; i++) {
            if (arr[i] % 2 == 0) {
                sum += arr[i];
                cnt2++;
            }
        }
        System.out.print(cnt2 + " " + sum);
    }
}