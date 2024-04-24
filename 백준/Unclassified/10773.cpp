#include <iostream>
#include <vector>
using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int K;
    int num;
    int result = 0;
    vector<int> v;
    cin >> K;
    while(K--) {
        cin >> num;
        if(num)
            v.push_back(num);
        else
            v.pop_back();
    }
    for(int & iter : v) {
        result += iter;
    }
    cout << result << "\n";
    return 0;
}
