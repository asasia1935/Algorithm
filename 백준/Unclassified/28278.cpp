#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL); 
  cout.tie(NULL);
  
  int N;
  int command;
  cin >> N;
  stack<int> newStack;

  while (N--) {
    cin >> command;
    switch (command) {
    case 1:
      int num;
      cin >> num;
      newStack.push(num);
      break;
    case 2:
      if (!newStack.empty()) {
        cout << newStack.top() << "\n";
        newStack.pop();
      }
      else {
        cout << -1 << "\n";
      }
      break;
    case 3:
      cout << newStack.size() << "\n";
      break;
    case 4:
      cout << newStack.empty() << "\n";
      break;
    case 5:
      if(!newStack.empty()){
        cout << newStack.top() << "\n";
      }
      else {
        cout << -1 << "\n";
      }
      break;
    }
  }

  return 0;
}
