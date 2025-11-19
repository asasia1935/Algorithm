#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    
    unordered_set<string> st;
    
    for(int i = 0; i < s.size(); i++)
    {
        for(int j = 0; j < s.size() - i; j++)
        {
            string subs = s.substr(j, i + 1);
            st.insert(subs);
        }
    }
    
    cout << st.size() << "\n";
    
    return 0;
}