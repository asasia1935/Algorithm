#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, num;
    cin >> N;
    int ans = 1, len1 = 1, len2 = 1;
    int arr[100000];
    for (int i = 0; i < N; i++) {
        cin >> num;
        arr[i] = num;
    }
    for (int i = 0; i < N - 1; i++) {
        if (arr[i] <= arr[i + 1]) len1++; // 연속해서 커지는 경우의 길이
        else len1 = 1;
        if (arr[i] >= arr[i + 1]) len2++; // 연속해서 작아지는 경우의 길이
        else len2 = 1;
        // 가장 큰 len의 값을 저장 (이후 작은 값이 들어오더라도 새로 저장되지 않음)
        int res = max(len1, len2);
        ans = max(res, ans);
    }

    cout << ans << "\n";
}
