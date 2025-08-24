#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> vis(n + 1, 0), par(n + 1, -1);

    for (int s = 1; s <= n; s++) {
        if (vis[s]) continue;

        queue<int> q;
        vis[s] = 1;
        q.push(s);

        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (int v : adj[u]) {
                if (!vis[v]) {
                    vis[v] = 1;
                    par[v] = u;
                    q.push(v);
                }
                else if (v != par[u]) {
                    // cycle found between u and v
                    vector<int> path1, path2;
                    int a = u, b = v;

                    while (a != b) {
                        if (a != -1) { path1.push_back(a); a = par[a]; }
                        if (b != -1 && a != b) { path2.push_back(b); b = par[b]; }
                    }
                    path1.push_back(a); // meeting point
                    reverse(path2.begin(), path2.end());
                    for (int node : path2) path1.push_back(node);
                    path1.push_back(path1[0]);

                    cout << path1.size() << "\n";
                    for (int node : path1) cout << node << " ";
                    return 0;
                }
            }
        }
    }

    cout << "IMPOSSIBLE\n";
}
