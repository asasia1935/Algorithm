import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] arr = new int[N];
        int min = Integer.MAX_VALUE;
        for(int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();
        }
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N - 1; j++) {
                if (i != j) {
                    int num = Math.abs(arr[i] - arr[j]);
                    if (num < min) {
                        min = num;
                    }
                }
            }
        }
        System.out.print(min);
    }
}