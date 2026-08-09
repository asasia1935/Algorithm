import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        int[] arr = new int[10];
        Scanner sc = new Scanner(System.in);
        int sum = 0;
        for(int i = 0; i < 10; i++) {
            int num = sc.nextInt();
            sum += num;
        }
        System.out.print(sum);
    }
}