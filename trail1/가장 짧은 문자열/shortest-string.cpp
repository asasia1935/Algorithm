#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    string a, b, c;
    cin >> a >> b >> c;
    auto maxLen = max({a.length(), b.length(), c.length()});
    auto minLen = min({a.length(), b.length(), c.length()});
    cout << maxLen - minLen;
    return 0;
}