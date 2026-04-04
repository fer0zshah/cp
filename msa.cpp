#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

long long msa(
    int root, int N,
    vector<int> &U, vector<int> &V, vector<long long> &W,
    vector<int> &resU, vector<int> &resV, vector<long long> &resW
) {
    long long t = 0;

    while (true) {

        vector<long long> in(N, INF);
        vector<int> par(N, -1);

        for (int i = 0; i < (int)U.size(); i++) {
            if (U[i] != V[i] && W[i] < in[V[i]]) {
                in[V[i]] = W[i];
                par[V[i]] = U[i];
            }
        }

        in[root] = 0;
        for (int i = 0; i < N; i++) {
            if (i == root) continue;
            if (in[i] == INF) return -1; 
        }

        vector<int> id(N, -1), vis(N, -1);
        int cc = 0;

        for (int i = 0; i < N; i++) {
            int v = i;
            long long sum = 0;
            while (vis[v] == -1 && v != root) {
                vis[v] = i;
                v = par[v];
            }
            if (v != root && vis[v] == i) {
                id[v] = cc;
                for (int u = par[v]; u != v; u = par[u]) {
                    id[u] = cc;
                }
                cc++;
            }
        }

        if (cc == 0) {
            for (int i = 0; i < N; i++) {
                if (i != root) {
                    resU.push_back(par[i]);
                    resV.push_back(i);
                    resW.push_back(in[i]);
                    t += in[i];
                }
            }
            return t;
        }

        for (int i = 0; i < N; i++) {
            if (id[i] == -1) id[i] = cc++;
        }
        vector<int> newU, newV;
        vector<long long> newW;

        for (int i = 0; i < (int)U.size(); i++) {
            int u2 = id[U[i]];
            int v2 = id[V[i]];
            long long w2 = W[i];

            if (u2 != v2) {
                w2 -= in[V[i]];
                newU.push_back(u2);
                newV.push_back(v2);
                newW.push_back(w2);
            }
        }

        t += accumulate(in.begin(), in.end(), 0LL);
        U = newU;
        V = newV;
        W = newW;
        N = cc;
        root = id[root];
    }
}


int main() {
    int N, M;
    cin >> N >> M;

    map<string, int> mp;
    vector<string> names;
    int counter = 0;

    auto getID = [&](string s) {
        if (!mp.count(s)) {
            mp[s] = counter++;
            names.push_back(s);
        }
        return mp[s];
    };

    string rootName;
    cin >> rootName;
    int root = getID(rootName);
    vector<int> U, V;
    vector<long long> W;

    for (int i = 0; i < M; i++) {
        string a, b;
        long long w;
        cin >> a >> b >> w;

        int u = getID(a);
        int v = getID(b);

        U.push_back(u);
        V.push_back(v);
        W.push_back(w);
    }

    vector<int> rU, rV;
    vector<long long> rW;

    long long cost = msa(root, N, U, V, W, rU, rV, rW);

    cout << "Root: " << rootName <<endl;

    if (cost == -1) {
        cout << "No directed spanning arborescence exists (some nodes are unreachable)"<<endl;
        return 0;
    }


    for (int i = 0; i < (int)rU.size(); i++) {
        cout << names[rU[i]] << " -> " << names[rV[i]]
             << " (" << rW[i] << ")"<<endl;
    }

    cout<<"Total cost:"<<cost <<endl;

    return 0;
}
