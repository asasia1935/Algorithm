class Solution {
    public int solution(int n) {
        int answer = 0;
        if(n % 7 == 0) n -= 1;
        answer = n / 7 + 1;
        return answer;
    }
}