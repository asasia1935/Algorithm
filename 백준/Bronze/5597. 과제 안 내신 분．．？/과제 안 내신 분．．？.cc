#include <iostream>

using namespace std;

int main() {
    int stu[30] = { 0, }, num;
    for (int i = 0; i < 28; i++) {
        cin >> num;
        stu[num - 1] = 1;
    }
    for (int i = 0; i < 30; i++) {
        if (stu[i] != 0)
            continue;
        cout << i + 1 << "\n";
    }
    return 0;
}