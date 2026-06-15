#include <iostream>
#include <string>
using namespace std;

struct Product {
    string name = "codetree";
    int code = 50;
};

int main() {
    // Please write your code here.
    Product p1, p2;
    cin >> p2.name >> p2.code;
    cout << "product " << p1.code << " is " << p1.name << endl;
    cout << "product " << p2.code << " is " << p2.name;
    return 0;
}