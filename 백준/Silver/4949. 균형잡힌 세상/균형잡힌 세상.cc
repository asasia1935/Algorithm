#include <iostream>
#include <stack>

using namespace std;

string s;

int main(void) {
	while(1) {
		getline(cin, s); // getline(cin, str, '\n')와 같음
		if(s.compare(".") == 0) break;
		stack<char> st;
		bool balance = 0;
		for(char a : s) {
			if(a == '(' || a == '[') st.push(a);
			else if(a == ')') {
				if(st.size() != 0 && st.top() == '(') st.pop();
				else {
					balance = 1;
					break;
				}
			}
			else if(a == ']') {
				if(st.size() != 0 && st.top() == '[') st.pop();
				else {
					balance = 1;
					break;
				}
			}
			else if(a == '.') break;
			else continue;
		}
		if(st.size() == 0 && balance == 0) cout << "yes" << "\n";
		else cout << "no" << "\n";
	}
}