#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string binary;
    cin >> binary;
    int num = 0;
    for(int i = 0; i < binary.size(); i++) {
        num = num * 2;
        if (binary[i] == '1') {
            num += 1;
        }
    }
    cout << num;
    return 0;
}