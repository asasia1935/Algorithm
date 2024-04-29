#include <iostream>
#include <stack>

using namespace std;

int n, cnt;
string s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        stack<char> st;
        for(char a : s) {
            if(st.size() != 0 && st.top() == a) st.pop();
            else st.push(a);
        }
        if(st.size() == 0) cnt++;
    }
    cout << cnt << "\n";
}