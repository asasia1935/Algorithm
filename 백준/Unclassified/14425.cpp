#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	int N, M, cnt = 0;
	map<string, int> mp;
	cin >> N >> M;
	for(int i = 0; i < N; i++) {
		string s;
		cin >> s;
		mp.insert(make_pair(s, 1));
	}
	for(int i = 0; i < M; i++) {
		string s;
		cin >> s;
		if(mp[s])
			cnt++;
	}
	cout << cnt;
	return 0;
}
