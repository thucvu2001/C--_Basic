#include <bits/stdc++.h>
using namespace std;

int n, m, u;
vector<int> dske[1001];
bool visited[1001];

void nhap()
{
    cin >> n >> m >> u;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        dske[x].push_back(y);
        dske[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}

void bfs(int u)
{
    queue<int> Q;
    Q.push(u);
    visited[u] = true;
    while (!Q.empty()) {
        int top = Q.front();
        Q.pop();

        for (int x : dske[top]) {
            if (!visited[x]) {
                Q.push(x);
                visited[x] = true;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
    }
    return 0;
}