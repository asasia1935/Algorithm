#include <iostream>
using namespace std;

struct Student {
    char name;
    int score;
};

int main() {
    // Please write your code here.
    Student student[5];

    int min = 100, idx = -1;

    for(int i = 0; i < 5; i++) {
        cin >> student[i].name >> student[i].score;

        if (student[i].score < min) {
            min = student[i].score;
            idx = i;
        }
    }

    cout << student[idx].name << " " << student[idx].score;

    return 0;
}