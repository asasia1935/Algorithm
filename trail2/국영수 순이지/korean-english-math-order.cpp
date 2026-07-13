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

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> korean[i];
        cin >> english[i];
        cin >> math[i];
    }

    vector<tuple<int, int, int, string>> people(n);

    for (int i = 0; i < n; i++) {
        people[i] = {-korean[i], -english[i], -math[i], name[i]};
    }

    sort(people.begin(), people.end());

    // Please write your code here.

    for (int i = 0; i < n; i++) {
        string nam;
        int kor, eng, mat;

        tie(kor, eng, mat, nam) = people[i];

        cout << nam << " " << -kor << " " << -eng << " " << -mat << "\n";
    }

    return 0;
}