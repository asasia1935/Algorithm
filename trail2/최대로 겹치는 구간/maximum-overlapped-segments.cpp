#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int arr[200] = {0, };
    for(int i = 0; i < N; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        for(int i = x1 + 100; i < x2 + 100; i++) {
            arr[i - 1]++;
        }
    }
    cout << *max_element(arr, arr+200);
    return 0;
}