#include <iostream>

using namespace std;

int main() {
    string s;
    while(true) {
        getline(cin, s);
        if(s.empty()) break;
        cout << s << "\n";
    }

    return 0;
}
