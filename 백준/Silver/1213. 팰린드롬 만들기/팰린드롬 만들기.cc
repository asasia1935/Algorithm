#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	int cnt[256];
	for(char a : s) cnt[a]++;
	int flag = 0;
	char mid = '\0';
	string res = "";
	for(int i = 'Z'; i >= 'A'; i--) {
		if(cnt[i]) {
			if(cnt[i] & 1) {
				mid = char(i);
				flag++;
				cnt[i]--;
			}
			if(flag == 2) break;
			for(int j = 0; j < cnt[i]; j += 2) {
				res = char(i) + res;
				res += char(i);
			}
		}
	}
	if(mid) res.insert(res.begin() + res.size() / 2, mid);
	if(flag == 2) cout << "I'm Sorry Hansoo\n";
	else cout << res << "\n";
}