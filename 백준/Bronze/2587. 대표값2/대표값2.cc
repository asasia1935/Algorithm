#include <iostream>
#include <algorithm>

using namespace std;

int nums[5], sum;

int main(void) {
	for(int i = 0; i < 5; i++) {
		cin >> nums[i];
		sum += nums[i];
	}
	sort(nums, nums+5);
	cout << sum / 5 << "\n";
	cout << nums[2] << "\n";
}