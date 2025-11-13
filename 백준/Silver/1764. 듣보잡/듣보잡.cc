#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    set<string> s;
    set<string> d;
    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        string str1;
        cin >> str1;
        s.insert(str1);
    }
    for(int i = 0; i < M; i++) {
        string str1;
        cin >> str1;
        if(s.count(str1) == 1) { d.insert(str1); }
    }
    cout << d.size() << "\n";
    for(auto str : d) {
        cout << str << "\n";
    }
    return 0;
}