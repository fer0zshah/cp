#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

vector<LL> bellman(   vector<vector<LL>>&edges,int V,int src){
    int e=edges.size();
    LL inf=1e15;
    vector<LL>dist(V+1,inf),par(V+1,-1);
    dist[src]=0;

    for(int i=0;i<V-1;i++){
        for(auto it:edges){
                 LL u=it[0]; LL v=it[1];LL w=it[2];
            if(dist[u]!=inf&&dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;
                par[v]=u;
            }
        }
    }
    for(auto it:edges){
             LL u=it[0]; LL v=it[1];LL w=it[2];
               if(dist[u]!=inf&&dist[v]>dist[u]+w){
                    par[v]=u;
                   return {-1};
               }
    }
    return par;
}

int main()
{
   LL V,e;
   cin>>V>>e;
   vector<vector<LL>>edges;
   for(int i=0;i<e;i++){
        LL u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
   }
  vector<LL>par=bellman(edges,V,1);
  vector<LL>cycle;
  if(par.size()==1&&par[0]==-1)
    {
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        int curr=V;
        while(curr!=-1){
            cycle.push_back(curr);
            curr=par[curr];
        }
        reverse(cycle.begin(),cycle.end());
        for(int i=0;i<cycle.size();i++){
            cout<<cycle[i]<< " ";
        }
    }
    return 0;
}
//4 5
//1 2 1
//2 4 1
//3 1 1
//4 1 -3
//4 3 -2
