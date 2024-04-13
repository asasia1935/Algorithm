#include <iostream>

using namespace std;

int main() {
	int paper[100][100] = {0};
	int sum = 0;
	int N;
	cin >> N;
	while(N--) {
		int x, y;
		cin >> x >> y;
		for(int i = y; i < y + 10; i++) {
			for(int j = x; j < x + 10; j++) {
				if(paper[i][j] == 1)
					continue;
				paper[i][j] = 1;
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}
