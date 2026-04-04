#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
vector<LL>par(2500+1,-1);LL x;
bool bellmanFord(vector<vector<int>>&edges,int V,int src){
    int INF=1e15;
    vector<LL>dist(V+1,0);
    dist[src]=0;
    int E=edges.size();
    for(int i=0;i<V-1;i++){  
        for(int j=0;j<E;j++){
            int u=edges[j][0],v=edges[j][1],w=edges[j][2];
            if(dist[u]!=INF&&dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;
                par[v]=u;
                // cout<<dist[v]<<endl;
              }
        }
    }
    for(int j=0;j<E;j++){
         int u=edges[j][0],v=edges[j][1],w=edges[j][2];
         //  cout<<u<<endl;
         if(dist[u]!=INF&&dist[v]>dist[u]+w){
             par[v]=u;
            x=v;
            // cout<<x<<endl;
            return true ;
         }
    }
    return false;
}
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 int V,E;
 cin>>V>>E;
 vector<vector<int>>edges;
 for(int i=0;i<E;i++){
    int u,v,w;
    cin>>u>>v>>w;
    edges.push_back({u,v,w});
}
bool f=bellmanFord(edges,V,1);
// for(int i=0;i<10;i++){
//     cout<<par[i]<<" ";
// }cout<<endl;
// cout<<x<<endl;
int curr=x;
// vector<int>path;
if(f){
     cout << "YES\n";
        int curr = x;
        vector<int> cycle;
        for (int i = 0; i < V; i++) curr = par[curr];
        int start = curr;
        cycle.push_back(start);
        curr = par[start];
        while (curr != start) {
            cycle.push_back(curr);
            curr = par[curr];
        }
        cycle.push_back(start);
        reverse(cycle.begin(), cycle.end());
        for (int v : cycle) cout << v << " ";
        cout << "\n";
}else cout<<"NO"<<endl;
 return 0; }