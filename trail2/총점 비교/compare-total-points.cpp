#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Person {
    string name;
    int score1;
    int score2;
    int score3;

    Person(string name1, int s1, int s2, int s3) {
        name = name1;
        score1 = s1;
        score2 = s2;
        score3 = s3;
    }
};

bool cmp(const Person& a, const Person& b) {
    return a.score1 + a.score2 + a.score3 < b.score1 + b.score2 + b.score3;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    vector<Person> people;
    people.reserve(n);
    for(int i = 0; i < n; i++) {
        string name1;
        int s1, s2, s3;
        cin >> name1 >> s1 >> s2 >> s3;
        people.push_back(Person(name1, s1, s2, s3));
    }
    sort(people.begin(), people.end(), cmp);
    for(int i = 0; i < n; i++) {
        cout << people[i].name << " " << people[i].score1 << " " << people[i].score2 << " " << people[i].score3 << "\n";
    }
    
    return 0;
}