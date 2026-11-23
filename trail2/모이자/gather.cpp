#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int n;
int A[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    int min = INT_MAX;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum += abs(i - j) * A[j];
        }
        if (sum < min) {
            min = sum;
        }
        sum = 0;
    }

    cout << min;

    return 0;
}