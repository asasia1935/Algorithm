#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include <algorithm>
using namespace std;

int n;
string name[10];
int korean[10];
int english[10];
int math[10];

struct Person {
    string name;
    int korean;
    int english;
    int math;
};

bool cmp(const Person& a, const Person& b) {
    if (a.korean != b.korean) {
        return a.korean > b.korean;
    }

    if (a.english != b.english) {
        return a.english > b.english;
    }

    return a.math > b.math;
}

int main() {
    cin >> n;

    vector<Person> people(n);

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> korean[i];
        cin >> english[i];
        cin >> math[i];

        people[i].name = name[i];
        people[i].korean = korean[i];
        people[i].english = english[i];
        people[i].math = math[i];
    }

    sort(people.begin(), people.end(), cmp);

    // Please write your code here.

    for (int i = 0; i < n; i++) {
        cout << people[i].name << " " << people[i].korean << " " << people[i].english << " " << people[i].math << "\n";
    }

    return 0;
}