#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Person {
    string name;
    int height;
    double weight;

    Person(string name, int height, double weight) : name(name), height(height), weight(weight)
    {
    }
};

bool cmp_name(const Person& a, const Person& b) {
    return a.name < b.name;
}

bool cmp_height(const Person& a, const Person& b) {
    return a.height > b.height;
}

int main() {
    // Please write your code here.
    vector<Person> people;
    people.reserve(5);
    for(int i = 0; i < 5; i++) {
        string name;
        int height;
        double weight;
        cin >> name >> height >> weight;
        people.emplace_back(name, height, weight);
    }
    sort(people.begin(), people.end(), cmp_name);
    cout << fixed << setprecision(1);
    cout << "name" << "\n";
    for(int i = 0; i < 5; i++) {
        cout << people[i].name << " " << people[i].height << " " << people[i].weight << "\n";
    }
    cout << "\n";
    sort(people.begin(), people.end(), cmp_height);
    cout << "height" << "\n";
    for(int i = 0; i < 5; i++) {
        cout << people[i].name << " " << people[i].height << " " << people[i].weight << "\n";
    }
    return 0;
}