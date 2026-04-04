#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
bool bellmanFord(vector<vector<int>>&edges,int V,int src){
    int INF=1e15;
    vector<LL>dist(V,0);
    dist[src]=0;
    int E=edges.size();
    for(int i=0;i<V-1;i++){  
        for(int j=0;j<E;j++){
            int u=edges[j][0],v=edges[j][1],w=edges[j][2];
            if(dist[u]!=INF&&dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;

              }
        }
    }
    for(int j=0;j<E;j++){
         int u=edges[j][0],v=edges[j][1],w=edges[j][2];

         if(dist[u]!=INF&&dist[v]>dist[u]+w){
            // cout<<x<<endl;
            return true ;
         }
    }
    return false;
}
 
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>edges;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
    }
    bool f=bellmanFord(edges,n,0);
    if(f)cout<<"possible"<<endl;
    else cout<<"not possible"<<endl;
}
 
 return 0; }