#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    vector<int> v;
    for (int i = 0; i < n; i++) {
        v.push_back(arr[i]);

        if (i % 2 == 0) {
            vector<int> temp = v;
            sort(temp.begin(), temp.end());
            cout << temp[temp.size() / 2] << " ";
        }
    }
    return 0;
}