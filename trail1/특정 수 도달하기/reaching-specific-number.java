import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int sum = 0; double avg = 0.0;
        int count = 0;
        for(int i = 0; i < 10; i++) {
            int a = sc.nextInt();
            if (a < 250) {
                sum += a;
                count++;
            } else {
                break;
            }
        }
        avg = (double)sum / count;

        System.out.print(sum);
        
        System.out.printf(" %.1f", avg);
    }
}