class Solution {
    public int solution(int[] array) {
        int answer = 0;
        int flag = 0;
        int max = Integer.MIN_VALUE;
        int[] index = new int[1000];
        for(int i = 0; i < array.length; i++) {
            index[array[i]]++;
        }
        for(int i = 0; i < index.length; i++) {
            if(max < index[i]) {
                max = index[i];
                answer = i;
                flag = 0;
            }
            else if(max == index[i]) {
                flag = 1;
            }
        }
        if(flag == 1) answer = -1;
        return answer;
    }
}