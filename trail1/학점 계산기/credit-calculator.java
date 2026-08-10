import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        double sum = 0;
        for(int i = 0; i < N; i++) {
            double grade = sc.nextDouble();
            sum += grade;
        }
        double avg = sum / N;

        if (avg >= 4.0) {
            System.out.printf("%.1f\n", avg);
            System.out.print("Perfect");
        } else if (avg >= 3.0) {
            System.out.printf("%.1f\n", avg);
            System.out.print("Good");
        } else {
            System.out.printf("%.1f\n", avg);
            System.out.print("Poor");
        }
    }
}