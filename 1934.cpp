#include <iostream>
using namespace std;

int T, A, B;

int gcd(int a, int b) {
    int n;

    while(b != 0) {
        n = a % b;
        a = b;
        b = n;
    }

    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main(void)
{
    cin >> T;
    while(T--) {
        cin >> A >> B;
        cout << lcm(A, B) << "\n";
    }
}
