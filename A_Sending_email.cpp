#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
int T=t;
while(t--){
    int V,E,s,d;
    cin>>V>>E>>s>>d;
    vector<pair<int,int>>adjList[V+1];
    for(int i=0;i<E;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adjList[u].push_back({v,w});
        adjList[v].push_back({u,w});
    }
    int INF=INT_MAX;
    vector<int>dist(V+1,INF);
    vector<int>vis(V+1,0);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    dist[s]=0;
    pq.push({0,s});
    while(!pq.empty()){
        int w=pq.top().first;
        int node=pq.top().second;
        pq.pop();
        if(vis[node])continue;
        vis[node]=1;
        for(auto &it:adjList[node]){
            // if(!vis[it.first]){
            int nei=it.first;
            int cost=it.second;
            if(dist[nei]>dist[node]+cost){
                dist[nei]=dist[node]+cost;
                pq.push({dist[nei],nei});
            }
        
        }
    }
    // for(int i=0;i<V+1;i++)cout<<dist[i]<<" ";
    // cout<<endl;cout<<endl;
    if(dist[d]==INF){
        cout<<"Case #"<<T-t<<": "<<"unreachable"<<endl;
        continue;
    }else
     cout<<"Case #"<<T-t<<": "<<dist[d]<<endl;
}
 
 return 0; }