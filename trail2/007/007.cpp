#include <iostream>
#include <string>
using namespace std;

struct type007 {
    string code;
    char point;
    int time;
};

int main() {
    // Please write your code here.
    type007 t7;
    cin >> t7.code >> t7.point >> t7.time;
    cout << "secret code : " << t7.code << "\n";
    cout << "meeting point : " << t7.point << "\n";
    cout << "time : " << t7.time;

    return 0;
}