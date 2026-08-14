import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        double sum = 0.0;
        int cnt = 0;
        for(int i = 0; i < 10; i++) {
            int num = sc.nextInt();
            if (num == 0) {
                break;
            }
            sum += num;
            cnt++;
        }
        System.out.printf("%d ", (int)sum);
        System.out.printf("%.1f", sum / cnt);
    }
}