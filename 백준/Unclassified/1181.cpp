#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(const string &a, const string &b)
{
    if (a.length() == b.length())
    {
        return a < b; // 길이가 같으면 사전순 비교
    }
    return a.length() < b.length(); // 기본적으로 길이 순으로 비교
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    string s;
    set<string> sets;
    cin >> N;
    while (N--)
    {
        cin >> s;
        sets.insert(s);
    }
    vector<string> vecs(sets.begin(), sets.end());
    sort(vecs.begin(), vecs.end(), compare);
    for (const auto &str : vecs)
    {
        cout << str << "\n";
    }
    return 0;
}