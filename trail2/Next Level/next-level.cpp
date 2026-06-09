#include <iostream>
#include <string>

using namespace std;

string user2_id;
int user2_level;

struct profile {
    string userId = "codetree";
    int userLevel = 10;
};

int main() {
    cin >> user2_id >> user2_level;

    // Please write your code here.
    profile user2;

    cout << "user " << user2.userId << " lv " << user2.userLevel << "\n";

    user2.userId = user2_id;
    user2.userLevel = user2_level;

    cout << "user " << user2.userId << " lv " << user2.userLevel << "\n";

    return 0;
}