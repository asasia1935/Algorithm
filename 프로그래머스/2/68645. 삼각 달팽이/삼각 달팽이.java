class Solution {
    public int[] solution(int n) {
        int[][] n2 = new int[n][n];
        int count = 0, x = 0, y = 0;
        while(true) {
            // 아래로 이동
            while(true) {
                n2[y][x] = ++count;
                if(y + 1 == n || n2[y + 1][x] != 0) break;
                y++;
            }
            // 왼쪽 아래로 이동이 끝난 후에 오른쪽 이동이 안되는 경우 전체 반복문 탈출
            if(x + 1 == n || n2[y][x + 1] != 0) break;
            x++;
            
            // 오른쪽 이동
            while(true) {
                n2[y][x] = ++count;
                if(x + 1 == n || n2[y][x + 1] != 0) break;
                x++;
            }
            // 오른쪽으로 이동이 끝난 후에 왼쪽 위로 이동이 안되는 경우 전체 반복문 탈출
            if(n2[y - 1][x - 1] != 0) break;
            x--;
            y--;
            
            
            // 왼쪽 위로 이동
            while(true) {
                n2[y][x] = ++count;
                if(n2[y - 1][x - 1] != 0) break;
                x--;
                y--;
            }
            // 왼쪽 위로 이동이 끝난 후에 다시 왼쪽 아래로 이동할 수 없는 경우 전체 반복문 탈출
            if(n2[y + 1][x] != 0) break;
            y++;
            
        }
        int[] result = new int[count];
        count = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                result[count] = n2[i][j];
                count++;
            }
        }
        return result;
    }
}