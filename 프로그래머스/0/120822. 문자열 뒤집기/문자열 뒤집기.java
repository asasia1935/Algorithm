class Solution {
    public String solution(String my_string) {
        String answer = "";
        char[] stringArray = my_string.toCharArray();
        for(int i = 0; i < my_string.length() / 2; i++) {
            char temp = stringArray[i];
            stringArray[i] = stringArray[stringArray.length - i - 1];
            stringArray[stringArray.length - i - 1] = temp;
        }
        answer = new String(stringArray);
        return answer;
    }
}