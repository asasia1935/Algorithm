#include <iostream>
#include <algorithm>

using namespace std;

int diff[3];

int main(void) {
	cin >> diff[0] >> diff[1] >> diff[2];
	sort(diff, diff + 3);
	if(diff[2] >= diff[1] + diff[0]) {
		cout << (diff[0] + diff[1] + diff[2] - diff[2] + diff[0] + diff[1] - 1) << "\n";
	}
	else {
		cout << (diff[0] + diff[1] + diff[2]) << "\n";
	}
}