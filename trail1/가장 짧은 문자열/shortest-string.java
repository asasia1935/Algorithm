import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String str1 = sc.next();
        String str2 = sc.next();
        String str3 = sc.next();
        int l1, l2, l3;
        l1 = str1.length();
        l2 = str2.length();
        l3 = str3.length();
        int[] arr = {l1, l2, l3};
        Arrays.sort(arr);
        System.out.print(arr[2] - arr[0]);
    }
}