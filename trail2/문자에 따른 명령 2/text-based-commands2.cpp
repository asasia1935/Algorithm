#include <iostream>

using namespace std;

string dirs;

int main() {
    cin >> dirs;

    // Please write your code here.
    int ny = 0, nx = 0;
    int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};
    int dir = 0;
    for (int i = 0; i < dirs.length(); i++) {
        if (dir < 0) {
            dir += 4;
        }
        if (dirs[i] == 'F') {
            ny += dy[dir % 4];
            nx += dx[dir % 4];
        }
        else if (dirs[i] == 'L') {
            dir--;
        }
        else if (dirs[i] == 'R') {
            dir++;
        }
    }
    cout << nx << " " << ny;
    return 0;
}