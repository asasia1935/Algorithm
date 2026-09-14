#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;
    char c;
    cin >> c;
    if (s.find(c) != string::npos) {
        cout << s.find(c);
    }
    else {
        cout << "No";
    }
    return 0;
}