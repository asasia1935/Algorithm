#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a[n] = {0, };
    int b[n] = {0, };
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a[i] = num;
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        b[i] = num;
    }
    sort(b, b + n);
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}