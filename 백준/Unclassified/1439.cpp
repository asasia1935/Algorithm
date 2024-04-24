#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string S;
    cin >> S;
    int a = 0, b = 0;
    for(int i = 0; i < S.length() - 1; i++) {
        if((S[i] == '1') && (S[i] != S[i + 1])) {
            a++;
        }
        else if((S[i] == '0') && (S[i] != S[i + 1])) {
            b++;
        }
    }
    int res = max(a, b);
    cout << res;
}
