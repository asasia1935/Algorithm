#include <iostream>

using namespace std;

int n;
int grid[100][100];

bool InRange(int x, int y, int n) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

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
            if (InRange(i - 1, j, n) && grid[i - 1][j] == 1) {
                cnt1++;
            }
            
            if (InRange(i + 1, j, n) && grid[i + 1][j] == 1) {
                cnt1++;
            }
            
            if (InRange(i, j - 1, n) && grid[i][j - 1] == 1) {
                cnt1++;
            }
            
            if (InRange(i, j + 1, n) && grid[i][j + 1] == 1) {
                cnt1++;
            }

            if (cnt1 >= 3) {
                cnt2++;
            }
        }
    }
    cout << cnt2;
    return 0;
}