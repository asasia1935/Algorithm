#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int N, K;
    string T;
    cin >> N >> K >> T;
    vector<string> v;
    for(int i = 0; i < N; i++) {
        string s;
        cin >> s;

        if (s.find(T) == 0) {
            v.push_back(s);
        }
    }
    sort(v.begin(), v.end());
    cout << v[K - 1];
    return 0;
}