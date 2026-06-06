#include <iostream>
#include <algorithm>
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
    cout << *max_element(arr, arr+100);
    return 0;
}