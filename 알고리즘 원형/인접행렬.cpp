#include <iostream>
#include <vector>

#define INF 9999999999999 // 무한의 비용 선언

using namespace std;

int main()
{
    vector<vector<long long>> graph = {
        {0, 7, 5},
        {7, 0, INF},
        {5, INF, 0}};

    // 인접 행렬 출력
    for (int i = 0; i < graph.size(); i++)
    {
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}