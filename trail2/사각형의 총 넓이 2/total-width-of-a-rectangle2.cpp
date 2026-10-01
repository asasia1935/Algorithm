#include <iostream>

using namespace std;

int N;
int x1[10], y1[10];
int x2[10], y2[10];
int xy[200][200];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }

    // Please write your code here.
    int cnt = 0;

    for (int i = 0; i < N; i++) {
        x1[i] += 100;
        y1[i] += 100;
        x2[i] += 100;
        y2[i] += 100;
    }

    for (int i = 0; i < N; i++) {
        for (int x = x1[i]; x < x2[i]; x++) {
            for (int y = y1[i]; y < y2[i]; y++) {
                if (x1[i] == 200 || y1[i] == 200) {
                    continue;
                }
                xy[x][y]++;
            }
        }
    }

    for(int i = 0; i < 200; i++) {
        for(int j = 0; j < 200; j++) {
            if (xy[i][j] > 0) {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}