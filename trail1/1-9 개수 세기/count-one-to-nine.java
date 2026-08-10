import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] arr = new int[N];
        int[] counting = new int[9];
        for(int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();
            counting[arr[i] - 1]++; 
        }
        for(int i = 0; i < 9; i++) {
            System.out.println(counting[i]);
        }
    }
}