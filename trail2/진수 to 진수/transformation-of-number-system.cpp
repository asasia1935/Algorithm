#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int A, B;
    string N;
    cin >> A >> B >> N;
    int num = 0;
    vector<int> v;
    for (int i = 0; i < N.length(); i++) {
        num *= A;
        if (N[i] == '1') {
            num += 1;
        }
        else if (N[i] == '2') {
            num += 2;
        }
        else if (N[i] == '3') {
            num += 3;
        }
        else if (N[i] == '4') {
            num += 4;
        }
        else if (N[i] == '5') {
            num += 5;
        }
        else if (N[i] == '6') {
            num += 6;
        }
        else if (N[i] == '7') {
            num += 7;
        }
        else if (N[i] == '8') {
            num += 8;
        }
    }
    while(true) {
        if (num < B) {
            v.push_back(num);
            break;
        }
        int n = num % B;
        v.push_back(n);
        num /= B;
    }
    for(auto itr = v.rbegin(); itr != v.rend(); itr++) {
        cout << *itr;
    }
    return 0;
}