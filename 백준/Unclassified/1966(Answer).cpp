#include <iostream>
#include <queue>

using namespace std;

int main() {
    int T;
    int count = 0;
    cin >> T;
    int n, m, imp;
    for (int i = 0; i < T; ++i) {
        count = 0;
        cin >> n >> m;
        queue<pair<int, int>> q;
        priority_queue<int> pq; // 값들을 내림차순으로 정렬
        for(int j = 0; j < n; ++j) {
            cin >> imp;
            q.emplace(j, imp);
            pq.push(imp);
        }
        while(!q.empty()) { // 빌때까지 반복
            int index = q.front().first;
            int value = q.front().second;
            q.pop();
            if(pq.top() == value) { // 일치하는 경우(출력해야함)
                pq.pop(); // 해당 값을 빼고
                ++count; // count번째 출력으로 증가
                if(index == m) { // m번째 문서를 찾은 경우
                    cout << count << "\n"; // 몇번째 출력인지 확인
                    break;
                }
            }
            else q.emplace(index, value); // 일치하지 않을 경우 뒤로 돌림
        }
    }

    return 0;
}
