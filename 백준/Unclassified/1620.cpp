#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	
	string name;
	
	int N, M;
	cin >> N >> M;
	unordered_map<int, string> pocketmon1;
	unordered_map<string, int> pocketmon2;
	
	for(int i = 0; i < N; i++) {
	    cin >> pocketmon1[i + 1];
	    pocketmon2[pocketmon1[i + 1]] = i + 1;
	}
	
	for(int i = 0; i < M; i++) {
	    cin >> name;
		if(isdigit(name[0]) != 0) {
		    auto index = pocketmon1.find(stoi(name));
		    cout << index->second << "\n";
		} else {
		    auto index = pocketmon2.find(name);
		    cout << index->second << "\n";
		}
	}
	return 0;
}
