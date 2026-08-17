import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int MIN_NUM = Integer.MIN_VALUE;
        int max = MIN_NUM;
        for(int i = 0; i < 10; i++) {
            int num = sc.nextInt();
            if (max < num) {
                max = num;
            }
        }
        System.out.print(max);
    }
}