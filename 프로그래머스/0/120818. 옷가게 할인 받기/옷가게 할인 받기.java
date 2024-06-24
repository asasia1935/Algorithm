class Solution {
    public int solution(int price) {
        int answer = 0;
        answer = price;
        if(price >= 100000) answer = price * 19 / 20;
        if(price >= 300000) answer = price * 9 / 10;
        if(price >= 500000) answer = price * 4 / 5;
        return answer;
    }
}