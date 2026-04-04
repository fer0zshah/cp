#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int inf=1e12;
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n,s,e;
while(cin>>n>>s>>e){
    int m;
    cin>>m;
    vector<pair<int,int>>adjList[n+1];
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adjList[u].push_back({v,w});
        adjList[v].push_back({u,w});
    }
    int k;
    cin>>k;
     vector<pair<int,int>>adj[n+1];
    for(int i=0;i<k;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }


    vector<int>dist(n+1,inf),vis(n+1,0),par(n+1,-1);
    dist[1]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,1});
    while(!q.empty()){
        int node=pq.top().second;
        pq.pop();
        if(vis[node])continue;
        vis[node]=1;
        for(auto nei:adjList[node]){
            if(dist[node]+nei.second<dist[nei]){
                dist[nei]=dist[node]+nei.second;
                par[nei]=node;
                pq.push({dist[nei],nei});
            }
        }
    }

    int curr=e;
    vector<int>ans;
    while(curr!=-1){
        ans.push_back(curr);
        curr=par[curr];
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size(),i++){
        cout<<ans[i]<<" ";
    }cout<<endl;

}
 
 return 0; }