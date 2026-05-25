#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int N, B;
    cin >> N >> B;
    vector<int> v;
    while(true) {
        if (N < B) {
            v.push_back(N);
            break;
        }

        int res = N % B;
        v.push_back(res);

        N /= B;
    }

    for(auto itr = v.rbegin(); itr != v.rend(); itr++) {
        cout << *itr;
    }
    return 0;
}