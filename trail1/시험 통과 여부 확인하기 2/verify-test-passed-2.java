import java.util.Scanner;

class Scores {
    int s1, s2, s3, s4;

    Scores(int s1, int s2, int s3, int s4) {
        this.s1 = s1;
        this.s2 = s2;
        this.s3 = s3;
        this.s4 = s4;
    }
}

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();

        Scores[] students = new Scores[N];

        for(int i = 0; i < N; i++) {
            int n1, n2, n3, n4;
            n1 = sc.nextInt();
            n2 = sc.nextInt();
            n3 = sc.nextInt();
            n4 = sc.nextInt();
            Scores scs = new Scores(n1, n2, n3, n4);
            students[i] = scs;
        }
        int cnt = 0;
        for(int i = 0; i < N; i++) {
            double sum = students[i].s1 + students[i].s2 + students[i].s3 + students[i].s4;
            double avg = sum / 4;
            if (avg >= 60) {
                cnt++;
                System.out.println("pass");
            } else {
                System.out.println("fail");
            }
        }
        System.out.print(cnt);
    }
}