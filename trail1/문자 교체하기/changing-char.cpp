#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string a, b;
    cin >> a >> b;
    cout << a.substr(0, 2) + b.substr(2);
    return 0;
}