#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void dfs(int v, const vector<vector<int>>& graph, vector<bool>& visited) {
    cout << v << " ";
    visited[v] = true;

    for (int i : graph[v]) {
        if (!visited[i]) {
            dfs(i, graph, visited);
        }
    }
}

void bfs(int start, const vector<vector<int>>& graph, vector<bool>& visited) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current << " ";

        for (int i : graph[current]) {
            if (!visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() {
    int N, M, V; // 정점의 개수, 간선의 개수, 시작 정점의 번호
    cin >> N >> M >> V;

    // 그래프 생성
    vector<vector<int>> graph(N + 1);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    // 정점 방문 여부를 나타내는 배열
    vector<bool> visited(N + 1, false);

    // 각 정점의 인접 정점들을 정렬
    for (int i = 1; i <= N; ++i) {
        sort(graph[i].begin(), graph[i].end());
    }

    // DFS 실행
    dfs(V, graph, visited);
    cout << "\n";

    // BFS 실행
    fill(visited.begin(), visited.end(), false); // 방문 여부 초기화
    bfs(V, graph, visited);

    return 0;
}