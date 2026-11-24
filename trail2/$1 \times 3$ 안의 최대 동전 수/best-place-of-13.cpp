#include <iostream>

using namespace std;

int N;
int grid[20][20];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> grid[i][j];

    // Please write your code here.
    int cnt = 0;

    int sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 2; j++) {
            sum = grid[i][j] + grid[i][j + 1] + grid[i][j + 2];
            if (sum > cnt) {
                cnt = sum;
            }
        }
    }

    cout << cnt;

    return 0;
}