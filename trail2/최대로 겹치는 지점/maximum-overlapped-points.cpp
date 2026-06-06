#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int arr[100] = {0, };
    for (int i = 0; i < N; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        for(int i = x1; i <= x2; i++) {
            arr[i - 1]++;
        }
    }
    int max = 0;
    for(int i = 0; i < 100; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}