#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;
    int num = 0;
    for(int i = 0; i < s.length(); i++) {
        num *= 2;
        if (s[i] == '1') {
            num += 1;
        }
    }
    num *= 17;
    vector<int> v;
    while(true) {
        if (num < 2) {
            v.push_back(num);
            break;
        }

        int n = num % 2;
        v.push_back(n);

        num /= 2;
    }
    for (auto itr = v.rbegin(); itr != v.rend(); itr++) {
        cout << *itr;
    }
    return 0;
}