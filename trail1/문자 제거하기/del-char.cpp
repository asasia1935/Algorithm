#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;
    while(s.length() > 1) {
        int n;
        cin >> n;
        if (s.length() <= n) {
            s = s.substr(0, s.length() - 1);
        } else if (n == 0) {
            s = s.substr(1);
        } else {
            s = s.substr(0, n) + s.substr(n + 1);
        }
        cout << s << "\n";
    }
    return 0;
}