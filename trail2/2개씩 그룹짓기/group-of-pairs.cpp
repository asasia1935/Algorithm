#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    vector<int> arr(n * 2);
    for (int i = 0; i < n * 2; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int answer = 0;

    for (int i = 0; i < n; i++) {
        int sum = arr[i] + arr[n * 2 - 1 - i];
        answer = max(answer, sum);
    }

    cout << answer;

    return 0;
}