#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;
    int n = A.length();

    int cnt = 0;

    // Please write your code here.
    for (int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if (A[i] == '(') {
                if (A[j] == ')') {
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}