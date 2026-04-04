#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (ll)9e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    if (!(cin >> n >> m)) return 0;

    vector<array<ll,3>> edges;
    edges.reserve(m);
    vector<vector<int>> revAdj(n+1);
    for (int i = 0; i < m; ++i) {
        int a, b; ll x;
        cin >> a >> b >> x;
        // To maximize score, we minimize -x
        edges.push_back({a, b, -x});
        revAdj[b].push_back(a);
    }

    // Precompute nodes that can reach n (reverse BFS)
    vector<int> canReachN(n+1, 0);
    {
        queue<int>q;
        q.push(n);
        canReachN[n] = 1;
        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (int p : revAdj[u]) {
                if (!canReachN[p]) {
                    canReachN[p] = 1;
                    q.push(p);
                }
            }
        }
    }

    // Bellman-Ford from source = 1
    vector<ll> dist(n+1, INF);
    dist[1] = 0;
    for (int i = 0; i < n-1; ++i) {
        bool any = false;
        for (auto &e : edges) {
            int u = (int)e[0], v = (int)e[1];
            ll w = e[2];
            if (dist[u] != INF && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                any = true;
            }
        }
        if (!any) break;
    }

    // Find nodes that are part of or affected by negative cycles
    vector<int> negAffected(n+1, 0);
    for (auto &e : edges) {
        int u = (int)e[0], v = (int)e[1];
        ll w = e[2];
        if (dist[u] != INF && dist[u] + w < dist[v]) {
            // v is affected
            negAffected[v] = 1;
        }
    }

    // Propagate the "affected" mark through reachable edges (V times)
    for (int iter = 0; iter < n; ++iter) {
        for (auto &e : edges) {
            int u = (int)e[0], v = (int)e[1];
            if (negAffected[u]) negAffected[v] = 1;
        }
    }

    // If any affected node can reach n, answer is -1
    bool infinite = false;
    for (int v = 1; v <= n; ++v) {
        if (negAffected[v] && canReachN[v]) {
            infinite = true;
            break;
        }
    }

    if (infinite) {
        cout << -1 << '\n';
    } else {
        // dist[n] is min of -score, so print -dist[n]
        // note: dist[n] should be finite because problem statement guarantees
        // there's a path from 1 to n.
        cout << -dist[n] << '\n';
    }

    return 0;
}
