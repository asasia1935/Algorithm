#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int x;
    char d[100];
    int arr[2000] = {0, };
    int start = 1000;
    for (int i = 0; i < N; i++) {
        cin >> x >> d[i];
        if (d[i] == 'R') {
            for(int i = start; i < start + x; i++) {
                arr[i - 1]++;
            }
            start += x;
        }
        else if (d[i] == 'L') {
            for(int i = start - 1; i >= start - x; i--) {
                arr[i - 1]++;
            }
            start -= x;
        }
    }
    int cnt = 0;
    for(int i = 0; i < 2000; i++) {
        if (arr[i] >= 2) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}