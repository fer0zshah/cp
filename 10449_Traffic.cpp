#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int INF=INT_MAX;
vector<int> bellmanFord(int src,vector<vector<int>>&edges,int V){
        int E=edges.size();
        vector<int>dist(V+1,INF);
        dist[1]=0;
        for(int i=0;i<V-1;i++){
            int f=0;
            for(int j=0;j<E;j++){
                int u=edges[j][0],v=edges[j][1],w=edges[j][2];
               
                if(dist[u]!=INF&&dist[v]>dist[u]+w){
                    dist[v]=dist[u]+w;
                    f=1;
                }
            }
            if(!f)break;
        }
        for(int j=0;j<E;j++){
            int u = edges[j][0];
            int v = edges[j][1];
            int w = edges[j][2];
            if(dist[u]!=INF&&dist[v]>dist[u]+w){
                dist[v]=-INF;
            }
        }
        return dist;
}
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n,tt=1;
while(cin>>n){
vector<int>V(n+1);
V[0]=0;
for(int i=1;i<=n;i++){
    cin>>V[i];
}
// for(int i=0;i<=n;i++)
// cout<<V[i]<<" ";
// cout<<endl;
int r;
cin>>r;
vector<vector<int>>edges;
for(int i=0;i<r;i++){
    int u,v;
    cin>>u>>v;
    edges.push_back({u,v,(V[v]-V[u])*(V[v]-V[u])*(V[v]-V[u])});
}
// for(int i=0;i<r;i++){
//     int uu=edges[i][0];
//     int vv=edges[i][1];
//     int w=edges[i][2];
//      cout<<uu<<" "<<vv<<" "<<w<<endl;
// }

  vector<int>dist=bellmanFord(1,edges,n);
//   for(int i=0;i<dist.size();i++){
//     cout<<dist[i]<<" ";
//   }
//   cout<<endl;
  int q;
  cin>>q;
  cout<<"Set #"<<tt<<endl;
  tt++;
  while(q--){
    int x;
    cin>>x;
    if(dist[x]<3||dist[x]==INF){
        cout<<'?'<<endl;
    }else cout<<dist[x]<<endl;
  }
}

 
 return 0; }