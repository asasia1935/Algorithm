#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;
    int len = s.length();
    string res;
    for(int i = len - 1; i >= 0; i--) {
        if(i % 2 == 1) {
            res += s[i];
        }
    }
    cout << res;
    return 0;
}