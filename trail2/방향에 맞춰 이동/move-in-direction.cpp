#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
    }

    // Please write your code here.
    int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};
    int nx = 0, ny = 0;

    for (int i = 0; i < n; i++) {
        if (dir[i] == 'N') {
            nx += dx[0] * dist[i];
            ny += dy[0] * dist[i];
        }
        else if (dir[i] == 'E') {
            nx += dx[1] * dist[i];
            ny += dy[1] * dist[i];
        }
        else if (dir[i] == 'S') {
            nx += dx[2] * dist[i];
            ny += dy[2] * dist[i];
        }
        else if (dir[i] == 'W') {
            nx += dx[3] * dist[i];
            ny += dy[3] * dist[i];
        }
    }

    cout << nx << " " << ny;

    return 0;
}