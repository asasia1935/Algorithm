#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string a, b;
    cin >> a >> b;
    int numA, numB;
    numA = stoi(a);
    numB = stoi(b);

    cout << numA + numB;

    return 0;
}