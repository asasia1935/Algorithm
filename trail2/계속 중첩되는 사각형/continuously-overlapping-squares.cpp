#include <iostream>

using namespace std;

int n;
int x1[10], y1[10];
int x2[10], y2[10];
int xy[200][200];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }

    // Please write your code here.
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        x1[i] += 100;
        y1[i] += 100;
        x2[i] += 100;
        y2[i] += 100;
    }

    for (int i = 0; i < n; i++) {
        for (int x = x1[i]; x < x2[i]; x++) {
            for(int y = y1[i]; y < y2[i]; y++) {
                if (i % 2 == 0) {
                    xy[x][y] = 1;
                }
                else {
                    xy[x][y] = 2;
                }
            }
        }
    }

    
    for (int x = 0; x < 200; x++) {
        for(int y = 0; y < 200; y++) {
            if (xy[x][y] == 2) {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}