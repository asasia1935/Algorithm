class Solution {
    public String solution(int a, int b) {
        String answer = "";
        int day = 0;
        switch(a) {
            case 12: day += 30;
            case 11: day += 31;
            case 10: day += 30;
            case 9: day += 31;
            case 8: day += 31;
            case 7: day += 30;
            case 6: day += 31;
            case 5: day += 30;
            case 4: day += 31;
            case 3: day += 29;
            case 2: day += 31;
                break;
        }
        day += b;
        int week = day % 7;
        if(week == 0) answer = "THU";
        if(week == 1) answer = "FRI";
        if(week == 2) answer = "SAT";
        if(week == 3) answer = "SUN";
        if(week == 4) answer = "MON";
        if(week == 5) answer = "TUE";
        if(week == 6) answer = "WED";
        return answer;
    }
}