#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL INF = 1e18;

vector<LL> Dijkstra(vector<vector<pair<LL,LL>>>&adj,int V,int src){
    vector<int>vis(V+1,0);
    // LL INF=1e14;
    vector<LL>dist(V+1,INF);
    priority_queue<pair<LL,LL>,vector<pair<LL,LL>>,greater<pair<LL,LL>>>pq;
    pq.push({0,1});
    dist[src]=0;
while(!pq.empty()){
    int node=pq.top().second;
    pq.pop();
    if(vis[node])continue;
    vis[node]=1;
    for(auto &it:adj[node]){
         
            if(dist[it.first]>dist[node]+it.second){
                dist[it.first]=dist[node]+it.second;
                pq.push({dist[it.first],it.first});
            }
        
    }
    
}
    return dist;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m,q;
    cin >> n >> m>>q;

    vector<vector<pair<LL,LL>>> adj(n+1);
    for (int i = 0; i < m; i++) {
        LL u, v;
        LL w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    while(q--){
    int src,des;
    cin >> src>>des;
    vector<LL> dist = Dijkstra(adj,n,src);
    if(dist[des]==INF)cout<<-1<<endl;
    else
    cout<<dist[des]<<endl;

    }


    return 0;
}
