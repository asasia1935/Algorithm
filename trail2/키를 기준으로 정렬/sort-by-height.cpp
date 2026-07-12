#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Person {
    string name;
    int length;
    int weight;
};

bool cmp(const Person& p1, const Person& p2) {
    return p1.length < p2.length;
}

int main() {
    int n;
    cin >> n;

    Person people[n]{};

    for (int i = 0; i < n; i++) {
        cin >> people[i].name >> people[i].length >> people[i].weight;
    }

    sort(people, people + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << people[i].name << " " << people[i].length << " " << people[i].weight << "\n";
    }

    return 0;
}