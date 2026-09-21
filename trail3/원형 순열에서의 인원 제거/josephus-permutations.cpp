#include <iostream>
#include <queue>

using namespace std;

int N, K;

int main() {
    cin >> N >> K;

    // Please write your code here.
    queue<int> q;
    vector<int> v;
    v.reserve(N);

    for(int i = 1; i <= N; i++) {
        q.push(i);
    }

    while(q.size() != 0) {
        for(int i = 0; i < K - 1; i++) {
            q.push(q.front());
            q.pop();
        }
        v.push_back(q.front());
        q.pop();
    }

    for(int i = 0; i < N; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
