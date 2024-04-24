#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
bool compare(pair<string, int> &a, pair<string, int> &b) {
    if(a.second == b.second) {
        if(a.first.length() == b.first.length())
            return a.first < b.first;
        return a.first.length() > b.first.length();
    }
    return a.second > b.second;
}
int main() {
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int N, M;
    cin >> N >> M;
    string word;
    map<string, int> m;
    for(int i = 0; i < N; i++) {
        cin >> word;
        if(word.length() >= M) {
            m[word]++;
        }
    }
    vector<pair<string, int>> vec(m.begin(), m.end());
    sort(vec.begin(), vec.end(), compare);
    for(const auto& iter : vec)
        cout << iter.first << "\n";
    return 0;
}
