#include <iostream>

using namespace std;

int main() {
    int T, a, b;
    cin >> T;
    for(int i = 0; i < T; i++) {
        int N, M;
        cin >> N >> M;
        for(int j = 0; j < M; j++) {
            cin >> a >> b;
        }
        cout << N - 1 << "\n";
    }
    return 0;
}
