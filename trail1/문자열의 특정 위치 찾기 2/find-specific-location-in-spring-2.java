import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        char c = sc.next().charAt(0);
        String[] strings = new String[] {"apple", "banana", "grape", "blueberry", "orange"};
        int cnt = 0;
        for(int i = 0; i < 5; i++) {
            if (c == strings[i].charAt(2) || c == strings[i].charAt(3)) {
                System.out.println(strings[i]);
                cnt++;
            }
        }
        System.out.print(cnt);
    }
}