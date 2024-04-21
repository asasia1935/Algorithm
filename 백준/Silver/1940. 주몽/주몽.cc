#include <iostream>
#include <vector>
#include <set>

using namespace std;

int a[15001], N, M, cnt;

int main(void) {
    cin >> N >> M;
    for(int i = 0; i < N; i++) {
    	cin >> a[i];
    }
    for(int i = 0; i < N; i++) {
    	for(int j = i + 1; j < N; j++) {
    		if(a[i] + a[j] == M) {
    			cnt++;
			}
		}
	}
	cout << cnt << "\n";
}