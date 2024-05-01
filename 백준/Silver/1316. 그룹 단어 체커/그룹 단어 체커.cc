#include <iostream>

using namespace std;

int n, cnt;
string s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        bool arr[256] = {false, };
        arr[s[0]] = true;
        for(int j = 1; j < s.length(); j++) {
            if(s[j - 1] == s[j]) continue;
            else if(s[j - 1] != s[j] && arr[s[j]]) {
                cnt++;
                break;
            }
            else arr[s[j]] = true;
        }
    }
    cout << n - cnt << "\n";
}