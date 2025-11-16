#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int N, M, num;
	cin >> N;
	int* card = new int[N];
	for(int i = 0; i < N; i++) {
		cin >> card[i];
	}
	sort(card, card + N);
	cin >> M;
	for(int i = 0; i < M; i++) {
		cin >> num;
		if(binary_search(card, card + N, num)) cout << 1;
		else cout << 0;
		cout << ' ';
	}
	return 0;
}