#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int x;
    char d[1000];
    
    int arr[200000] = {0,};
    int start = 100000;
    for (int i = 0; i < N; i++) {
        cin >> x >> d[i];
        if (d[i] == 'R') {
            for(int i = start; i < start + x; i++) {
                arr[i - 1] = 1;
            }
            start += x - 1;
        }
        else if (d[i] == 'L') {
            for(int i = start; i > start - x; i--) {
                arr[i - 1] = -1;
            }
            start -= x - 1;
        }
    }
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0; i < 200000; i++) {
        if (arr[i] == -1) {
            cnt1++;
        }
        else if (arr[i] == 1) {
            cnt2++;
        }
    }
    cout << cnt1 << " " << cnt2;
    return 0;
}