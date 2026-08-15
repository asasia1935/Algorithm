import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        char[] arr = new char[]{'L', 'E', 'B', 'R', 'O', 'S'};
        Scanner sc = new Scanner(System.in);
        char a = sc.next().charAt(0);
        int idx = -1;
        boolean bResult = false;
        for(int i = 0; i < 6; i++) {
            if (a == arr[i]) {
                idx = i;
                bResult = true;
                break;
            }
        }
        if (bResult) {
            System.out.print(idx);
        } else {
            System.out.print("None");
        }
    }
}