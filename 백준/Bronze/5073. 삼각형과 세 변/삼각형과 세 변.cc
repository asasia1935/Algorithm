#include <iostream>
#include <algorithm>

using namespace std;

int diff[3];

int main(void) {
	while(1) {
		cin >> diff[0] >> diff[1] >> diff[2];
		sort(diff, diff + 3);
		if(diff[0] == 0 && diff[1] == 0 && diff[2] == 0) break;
		if(diff[2] >= diff[1] + diff[0]) cout << "Invalid" << "\n";
		else if(diff[2] == diff[1] && diff[1] == diff[0]) {
			cout << "Equilateral" << "\n";
		}
		else if(diff[2] == diff[1] || diff[1] == diff[0]) {
			cout << "Isosceles" << "\n";
		}
		else cout << "Scalene" << "\n";
	}
}