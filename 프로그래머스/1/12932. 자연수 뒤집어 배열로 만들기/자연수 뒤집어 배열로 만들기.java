import java.util.ArrayList;

class Solution {
    public int[] solution(long n) {
        String longStr = Long.toString(n);
        char[] charArray = longStr.toCharArray();
        for(int i = 0; i < charArray.length / 2; i++) {
            char temp = charArray[i];
            charArray[i] = charArray[charArray.length - 1 - i];
            charArray[charArray.length - 1 - i] = temp;
        }
        int[] intArray = new int[charArray.length];
        for(int i = 0; i < intArray.length; i++) {
            intArray[i] = charArray[i] - '0';
        }
        return intArray;
    }
}