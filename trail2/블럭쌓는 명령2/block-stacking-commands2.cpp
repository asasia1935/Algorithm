#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N, K;
    cin >> N >> K;
    int arr[100] = {0, };
    for(int i = 0; i < K; i++) {
        int A, B;
        cin >> A >> B;
        for(int i = A; i <= B; i++) {
            arr[i - 1]++;
        }
    }
    int max = arr[0];
    for(int i = 0; i < 100; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }

    }
    cout << max;
    return 0;
}