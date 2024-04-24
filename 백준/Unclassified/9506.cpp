#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    while(true) {
        int n, sum = 0;
        vector<int> yak;
        cin >> n;
        if(n == -1) break;
        for(int i = 1; i < sqrt(n); i++) {
            if(n % i == 0) {
                yak.push_back(i);
            }
        }
        for(int i : yak) {
            sum += i;
        }
        if(n == sum) {
            cout << n << " = ";
            for(int i = 0; i < yak.size(); i++) {
                if(i == yak.size() - 1)
                    cout << yak[i];
                else
                    cout << yak[i] << " + ";
            }
            cout << "\n";
        }
        else {
            cout << n << " is NOT perfect.\n";
        }
    }

    return 0;
}
