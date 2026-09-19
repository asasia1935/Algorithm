#include <iostream>

using namespace std;

int n;
int grid[100][100];

bool InRange(int x, int y, int n) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.

    int cnt2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int cnt1 = 0;

            for (int dir = 0; dir < 4; dir++) {
                int ny = i + dy[dir];
                int nx = j + dx[dir];

                if (InRange(ny, nx, n) && grid[ny][nx] == 1) {
                    cnt1++;
                }
            }

            if (cnt1 >= 3) {
                cnt2++;
            }
        }
    }
    cout << cnt2;
    return 0;
}