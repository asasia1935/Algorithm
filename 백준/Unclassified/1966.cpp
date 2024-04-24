#include <iostream>
#include <deque>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        deque<int> dq;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            dq.push_back(num);
        }

        int order = 0;
        while (!dq.empty()) {
            bool isMax = true;
            for (int i = 1; i < dq.size(); i++) {
                if (dq[i] > dq[0]) {
                    isMax = false;
                    break;
                }
            }

            if (isMax) {
                order++;
                if (m == 0) {
                    cout << order << endl;
                    break;
                }
                dq.pop_front();
            } else {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            
            if(m == 0) {
                m = dq.size() - 1;
            }
            else {
                m--;
            }
        }
    }

    return 0;
}
