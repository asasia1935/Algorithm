#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	
	stack<int> st;
	int N, num, order = 1;
	cin >> N;
	while(N--) {
		cin >> num;
		if(num == order) {
			order++;
		}
		else {
			st.push(num);
		}
		
		while(!st.empty() && st.top() == order) {
			st.pop();
			order++;
		}
	}
	
	if(st.empty()) {
		cout << "Nice";
	}
	else {
		cout << "Sad";
	}
	
	return 0;
}
