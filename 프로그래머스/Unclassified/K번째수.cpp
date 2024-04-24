#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> newVec;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    for (int i = 0; i < commands.size(); i++) {
        vector<int> array2(array.begin() + commands[i][0] - 1, array.begin() + commands[i][1]);
        sort(array2.begin(), array2.end());
        newVec.push_back(array2[commands[i][2] - 1]);
    }
    vector<int> answer = newVec;
    return answer;
}
