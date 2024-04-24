#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	
	int T, n;
	string A, B;
	cin >> T;
	while(T--) {
		cin >> n;
		map<string, int> wear;
		while(n--) {
			cin >> A >> B;
			wear[B]++;
		}
		long long result = 1;
		for(auto index : wear){
			result *= ((long long)index.second + 1);
		}
		cout << result - 1 << "\n";
	}
}
