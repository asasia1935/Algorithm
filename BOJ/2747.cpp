#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> v;
    v.push_back(0); v.push_back(1);
    for(int i = 2; i <= N; i++) {
        v.push_back(v[i - 1] + v[i - 2]);
    }
    cout << v[N] << "\n";
    return 0;
}
