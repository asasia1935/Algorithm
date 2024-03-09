#include <iostream>
#include <set>
using namespace std;

int main()
{
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
