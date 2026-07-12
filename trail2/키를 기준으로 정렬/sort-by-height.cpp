    #include <iostream>
    #include <string>
    #include <algorithm>
    #include <tuple>
    using namespace std;

    int main() {
        int n;
        cin >> n;

        tuple<int, string, int> people[n];

        for (int i = 0; i < n; i++) {
            int length;
            string name;
            int weight;

            cin >> name >> length >> weight;

            people[i] = make_tuple(length, name, weight);
        }

        sort(people, people + n);

        for (int i = 0; i < n; i++) {
            int length;
            string name;
            int weight;

            tie(length, name, weight) = people[i];

            cout << name << " " << length << " " << weight << "\n";
        }

        return 0;
    }