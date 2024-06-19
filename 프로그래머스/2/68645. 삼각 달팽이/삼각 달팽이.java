class Solution {
    private static final int[] dx = {0, 1, -1};
    private static final int[] dy = {1, 0, -1};
    public int[] solution(int n) {
        int[][] n2 = new int[n][n];
        int count = 1, x = 0, y = 0, d = 0;
            
        while (true) {
            n2[y][x] = count++;
            int nx = x + dx[d];
            int ny = y + dy[d];
            // nx == n, ny == n은 왼쪽 아래, 오른쪽 이동이 불가능한 경우
            // nx == -1, ny == -1은 왼쪽 위로 이동이 불가능한 경우
            // n2[ny][nx] != 0은 다 찼을 경우
            if(nx == n || ny == n || nx == -1 || ny == -1 || n2[ny][nx] != 0) {
                // 조건에 걸린 경우는 더이상 진행이 안되는 경우이고 d의 값을 바꿔 진행 방향을 바꿔야함
                d = (d + 1) % 3;
                nx = x + dx[d];
                ny = y + dy[d];
                // 이후에 같은 조건을 체크
                if(nx == n || ny == n || nx == -1 || ny == -1 || n2[ny][nx] != 0) break;
                // 두번 연속으로 이동을 못하는 경우는 모든 숫자가 다 채워졌을 경우이므로 while문 종료
            }
            // 조건에 걸리지 않으면 위처럼 이동한 후에 끝
            x = nx;
            y = ny;
        }
            
        int[] result = new int[count - 1];
        count = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                result[count++] = n2[i][j];
            }
        }
            
        return result;
    }
}