#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;

    // Please write your code here.
    int num[20] = {};
    int cnt = 0;

    while (true) {
        if (n < 2) {
            num[cnt++] = n;
            break;
        }

        num[cnt++] = n % 2;
        n /= 2;
    }
    
    for (int i = cnt - 1; i >= 0; i--) {
        cout << num[i];
    }

    return 0;
}