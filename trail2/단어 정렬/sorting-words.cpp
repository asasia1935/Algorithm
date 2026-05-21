#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        v.push_back(str);
    }
    sort(v.begin(), v.end());
    for (auto s : v) {
        cout << s << "\n";
    }
    return 0;
}