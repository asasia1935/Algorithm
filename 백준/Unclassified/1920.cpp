#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); 
  
  int N;
  int num;
  vector<int> arr, arr2;
  int M;
  cin >> N;
  while(N--) {
    cin >> num;
    arr.push_back(num);
  }
  sort(arr.begin(), arr.end());
  cin >> M;
  while(M--) {
    cin >> num;
    arr2.push_back(num);
  }
  
  for(int i = 0; i < arr2.size(); i++) {
    cout << binary_search(arr.begin(), arr.end(), arr2[i]) << '\n';
  }
  return 0;
}
