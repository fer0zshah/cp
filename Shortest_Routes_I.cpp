#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int V,E;
cin>>V>>E;
vector<int>vis(V+1,0);
LL INF=1e14;
vector<LL>dist(V+1,INF);
vector<pair<LL,LL>>adjList[V+1];
for(int i=0;i<E;i++){
    LL u,v,w;
    cin>>u>>v>>w;
    adjList[u].push_back({v,w});
}
priority_queue<pair<LL,LL>,vector<pair<LL,LL>>,greater<pair<LL,LL>>>pq;
pq.push({0,1});
dist[1]=0;
while(!pq.empty()){
    int node=pq.top().second;
    pq.pop();
    if(vis[node])continue;
    vis[node]=1;
    for(auto &it:adjList[node]){
         
            if(dist[it.first]>dist[node]+it.second){
                dist[it.first]=dist[node]+it.second;
                pq.push({dist[it.first],it.first});
            }
        
    }
    
}
    for(int i=1;i<V+1;i++){
        cout<<dist[i]<<" ";
    }

 
 return 0; }