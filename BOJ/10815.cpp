#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, M, num;
    vector<int> v;
    cin >> N;
    while (N--)
    {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> num;
        if (binary_search(v.begin(), v.end(), num))
        {
            cout << 1;
        }
        else
            cout << 0;
        cout << ' ';
    }
    return 0;
}