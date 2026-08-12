import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int[] arr = new int[10];
        int cnt = 0;
        boolean flag = false;
        for(int i = 0; i < 10; i++) {
            arr[i] = sc.nextInt();
            cnt++;
            if (arr[i] == 0) {
                flag = true;
                break;
            }
        }
        if (flag) {
            for(int i = cnt; i > 1; i--) {
                System.out.print(arr[i - 2] + " ");
            }
        } else {
            for(int i = cnt; i > 0; i--) {
                System.out.print(arr[i - 1] + " ");
            }
        }
    }
}