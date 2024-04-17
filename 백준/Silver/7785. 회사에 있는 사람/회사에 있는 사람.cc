#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    map<string, int> mp;
    int n;
    cin >> n;
    string s, e;
    while(n--) {
        cin >> s >> e;
        if(e == "enter") {
            mp.insert(make_pair(s, 1));
        }
        else if(e == "leave") {
            mp.erase(s);
        }
    }
    for(auto it = mp.rbegin(); it != mp.rend(); it++) {
        cout << it->first << "\n";
    }
    return 0;
}