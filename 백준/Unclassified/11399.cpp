#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, time, sum = 0;
    vector<int> v;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> time;
        v.push_back(time);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < N; i++) {
        sum += v[i] * (N - i);
    }
    cout << sum;
}
