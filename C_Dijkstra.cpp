#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int V,e;
cin>>V>>e;
vector<pair<LL,LL>>adjList[V+1];

for(int i=0;i<e;i++){
    int u,v,w;
    cin>>u>>v>>w;
    adjList[u].push_back({v ,w});
    adjList[v].push_back({u,w});
}
LL inf=1e18;
vector<LL>dist(V+1,inf);
dist[1]=0;
vector<int>vis(V+1,0);
vector<LL>par(V+1,-1);
priority_queue<pair<LL,LL>,vector<pair<LL,LL>>,greater<pair<LL,LL>>>pq;
pq.push({0,1});
while(!pq.empty()){
    LL node=pq.top().second;
    pq.pop();
    if(vis[node])continue;
    vis[node]=1;
    for(auto &it:adjList[node]){
        if(dist[it.first]>it.second+dist[node]){
            dist[it.first]=it.second+dist[node];
            par[it.first]=node;
            pq.push({dist[it.first],it.first});
        }
    }

}
if(dist[V]==inf){
    cout<<-1<<endl;
    return 0;
}
// for(int i=0;i<=V;i++)cout<<par[i]<<" ";cout<<endl;
vector<LL>sp;
LL curr=V;
while(curr!=-1){
    sp.push_back(curr);
    curr=par[curr];
}
reverse(sp.begin(),sp.end());
for(int i=0;i<sp.size();i++)cout<<sp[i]<<" ";
cout<<endl;

 
 return 0; }