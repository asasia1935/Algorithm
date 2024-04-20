#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int V = 3; // 노드의 수
    vector<vector<pair<int, int>>> graph(V);

    // 간선 추가
    graph[0].push_back({1, 7});
    graph[0].push_back({2, 5});
    graph[1].push_back({0, 7});
    graph[2].push_back({0, 5});

    // 인접 리스트 출력
    for (int i = 0; i < V; i++)
    {
        cout << "Adjacency list of vertex " << i << ": ";
        for (pair<int, int> edge : graph[i])
        {
            cout << "(" << edge.first << ", " << edge.second << ") ";
        }
        cout << endl;
    }

    return 0;
}