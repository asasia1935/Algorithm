class Solution {
    public int[] solution(int money) {
        int count = money / 5500;
        int[] answer = {money / 5500, money - count * 5500};
        return answer;
    }
}