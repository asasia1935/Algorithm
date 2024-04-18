#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
	string s;
	cin >> s;
	unordered_set<string> st;
	for(int i = 0; i < s.size(); i++) {
		for(int j = 0; j < s.size(); j++) {
			string subs = s.substr(j, i + 1);
			st.insert(subs);
		}
	}
	cout << st.size() << "\n";
}