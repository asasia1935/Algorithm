class Solution {
    public int[] solution(int[] num_list) {
        int oddCount = 0, evenCount = 0;
        for(int num : num_list) {
            if(num % 2 == 1) {
                oddCount++;
            }
            else {
                evenCount++;
            }
        }
        int[] answer = {evenCount, oddCount};
        return answer;
    }
}