#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> a, b;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(); cout.tie();
    int N, num, sum = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num;
        a.push_back(num);
    }
    for (int i = 0; i < N; i++) {
        cin >> num;
        b.push_back(num);
    }
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    for (int i = 0; i < N; i++) {
        sum += (a[i] * b[i]);
    }
    cout << sum << "\n";
    return 0;
}
