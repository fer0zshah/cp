#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int find(int x,vector<int>&par){
    if(par[x]==x)return x;
    return par[x]=find(par[x],par);
}

void Union(int u,int v,vector<int>&par,vector<int>&rank){
    int pu=find(u,par);
    int pv=find(v,par);
    if(rank[pv]==rank[pu]){
        par[pv]=pu;
        rank[pu]++;
    }else if(rank[pv]<rank[pu]){
        par[pv]=pu;
    }else{
        par[pu]=pv;
    }
}
// set<int>s;
LL kruskal(vector<vector<int>>&edges,int V){
    int e=edges.size();
    sort(edges.begin(),edges.end(),[](auto &a,auto &b){
        return a[2]<b[2];
    });
    vector<int>par(V+1),rank(V+1,0);
    for(int i=1;i<V+1;i++)par[i]=i;
    LL cost=0;
    for(int i=0;i<e;i++){
        int u=edges[i][0];int v=edges[i][1];int w=edges[i][2];
        if(find(u,par)!=find(v,par)){
            cost+=w;
            Union(u,v,par,rank);
        }
    }
    int r=find(1,par);
    for(int i=2;i<=V;i++){
        if(find(i,par)!=r)return -1;
    }

    return cost;
}
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int V,e;
cin>>V>>e;
vector<vector<int>>edges;
for(int i=0;i<e;i++){
    int u,v,w;
    cin>>u>>v>>w;
    edges.push_back({u,v,w});
}
LL cost=kruskal(edges,V);
// cout<<s.size()<<endl;

if(cost==-1)cout<<"IMPOSSIBLE"<<endl;
else cout<<cost<<endl;
 
 return 0; }