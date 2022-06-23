#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> dske[1001];
bool visited[1001];

void nhap()
{
    cin >> n >> m;
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
    visited[u] = true;
    Q.push(u);
    while (!Q.empty()) {
        int v = Q.front();
        Q.pop();
        for (int x : dske[v]) {
            if (!visited[x]) {
                Q.push(x);
                visited[x] = true;
            }
        }
    }
}

void dinhTru()
{
    vector<int> ans; // luu cac dinh tru;
    int tplt = 0; // dem so tplt
    memset(visited, false, sizeof(visited));
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            tplt++;
            bfs(i);
        }
    }

    for (int i = 1; i <= n; i++) {
        memset(visited, false, sizeof(visited));
        visited[i] = true;
        int dem = 0;
        for (int j = 1; j <= n; j++) {
            if (!visited[j]) {
                bfs(j);
                dem++;
            }
        }
        if (dem > tplt) {
            ans.push_back(i);
        }
    }
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        nhap();
        dinhTru();
    }
    return 0;
}