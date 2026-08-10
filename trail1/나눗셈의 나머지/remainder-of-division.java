import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int[] counting = new int[10];
        int sum = 0;
        while(A > 1) {
            counting[A % B]++;
            A = A / B;
            if (A == 0) {
                break;
            }
        }
        for(int i = 0; i < 10; i++) {
            sum += counting[i] * counting[i];
        }
        System.out.print(sum);
    }
}