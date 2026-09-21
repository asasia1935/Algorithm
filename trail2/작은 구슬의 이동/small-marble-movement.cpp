#include <iostream>

using namespace std;

int n, t;
int r, c;
char d;

bool InRange(int x, int y) {
    return (x <= n && 0 < x && y <= n && 0 < y);
}

int main() {
    cin >> n >> t;
    cin >> r >> c >> d;

    // Please write your code here.

    int dy[4] = {1, 0, 0, -1};
    int dx[4] = {0, 1, -1, 0};

    int dir = 0;
    if (d == 'U') {
        dir = 3;
    }
    else if (d == 'D') {
        dir = 0;
    }
    else if (d == 'R') {
        dir = 1;
    }
    else if (d == 'L') {
        dir = 2;
    }

    for(int i = 0; i < t; i++) {
        int nr = r + dy[dir], nc = c + dx[dir];
        if (InRange(nr, nc)) {
            r += dy[dir];
            c += dx[dir];
        }
        else {
            dir = 3 - dir;
            continue;
        }
    }

    cout << r << " " << c;

    return 0;
}