import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[10];
        for(int i = 0; i < 10; i++) {
            arr[i] = sc.nextInt();

        }
        int sum1 = 0;
        for(int i = 0; i < 10; i++) {
            if (i % 2 == 1) {
                sum1 += arr[i];
            }
        }
        System.out.print(sum1);
        double sum2 = 0.0;
        int cnt = 0;
        for(int i = 0; i < 10; i++) {
            if (i % 3 == 2) {
                sum2 += arr[i];
                cnt++;
            }
        }
        if (cnt == 0) {
            System.out.print(" 0.0");
        } else {
            System.out.printf(" %.1f", sum2 / cnt);
        }
    }
}