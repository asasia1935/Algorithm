#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, count = 0;
    set<string> set1;
    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        string n;
        cin >> n;
        set1.insert(n);
    }
    for(int i = 0; i < M; i++) {
        string m;
        cin >> m;
        if(set1.count(m) == 1) { count++; }
    }
    cout << count;
    return 0;
}