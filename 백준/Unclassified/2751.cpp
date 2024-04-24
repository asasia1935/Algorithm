#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int N;
    int num;
    set<int> s;
    set<int>::iterator iter;
    cin >> N;
    while(N--) {
        cin >> num;
        s.insert(num);
    }
    for(iter = s.begin(); iter != s.end(); iter++) {
        cout << *iter << "\n";
    }
    return 0;
}
