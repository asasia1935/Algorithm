#include <iostream>
using namespace std;

struct Tile {
    int color = 0;
    int black = 0;
    int white = 0;
};

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int x;
    char d[1000];
    
    Tile arr[200000];
    int start = 100000;
    for (int i = 0; i < N; i++) {
        cin >> x >> d[i];
        if (d[i] == 'R') {
            for(int i = start; i < start + x; i++) {
                if (arr[i - 1].color == 2) {
                    continue;
                }

                arr[i - 1].color = 1;
                arr[i - 1].black++;

                if (arr[i - 1].black >= 2 && arr[i - 1].white >= 2) {
                    arr[i - 1].color = 2;
                }
            }
            start += x - 1;
        }
        else if (d[i] == 'L') {
            for(int i = start; i > start - x; i--) {
                if (arr[i - 1].color >= 4) {
                    continue;
                }

                arr[i - 1].color = -1;
                arr[i - 1].white++;

                if (arr[i - 1].black >= 2 && arr[i - 1].white >= 2) {
                    arr[i - 1].color = 2;
                }
            }
            start -= x - 1;
        }
    }
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    for(int i = 0; i < 200000; i++) {
        if (arr[i].color == -1) {
            cnt1++;
        }
        else if (arr[i].color == 1) {
            cnt2++;
        }
        else if (arr[i].color == 2) {
            cnt3++;
        }
    }
    cout << cnt1 << " " << cnt2 << " " << cnt3;
    return 0;
}