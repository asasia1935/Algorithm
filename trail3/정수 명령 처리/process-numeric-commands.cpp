#include <iostream>
#include <stack>

using namespace std;

int N;
string command[10000];
int value[10000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> value[i];
        }
    }

    // Please write your code here.
    stack<int> st;
    for(int i = 0; i < N; i++) {
        if (command[i] == "push") {
            st.push(value[i]);
        }
        else if (command[i] == "pop") {
            int num = st.top();
            st.pop();
            cout << num << endl;
        }
        else if (command[i] == "size") {
            cout << st.size() << endl;
        }
        else if (command[i] == "empty") {
            if (st.empty()) {
                cout << 1 << endl;
            }
            else {
                cout << 0 << endl;
            }
        }
        else if (command[i] == "top") {
            int num = st.top();
            cout << num << endl;
        }
    }

    return 0;
}
