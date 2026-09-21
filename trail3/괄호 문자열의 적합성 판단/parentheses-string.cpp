#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main() {
    cin >> str;

    string res = "Yes";
    // Please write your code here.
    stack<char> st;
    for(int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            st.push('(');
        }
        else {
            if (st.empty()) {
                res = "No";
                break;
            }
            else {
                st.pop();
            }
        }
    }
    if (!st.empty()) {
        res = "No";
    }
    cout << res;
    return 0;
}
