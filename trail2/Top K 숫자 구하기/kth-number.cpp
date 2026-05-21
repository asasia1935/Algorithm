#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int N, K;
    cin >> N >> K;
    int v[N] = {0, };
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        v[i] = num;
    }
    sort(v, v + N);
    cout << v[K - 1];
    return 0;
}