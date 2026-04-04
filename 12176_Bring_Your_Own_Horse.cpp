#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int find(vector<int>&par,int x){
    if(par[x]==x)return x;
    return par[x]=find(par,par[x]);
}

void Union(int u,int v,vector<int>&par,vector<int>&rank){
    int pu=find(par,u);
    int pv=find(par,v);
    if(pu==pv)return ;
    if(rank[pu]>rank[pv]){
        par[pv]=pu;
    }else if(rank[pu]<rank[pv]){
        par[pu]=pv;
    }else{
        par[pu]=pv;
        rank[pv]++;
    }
}
vector<vector<pair<int,int>>> kruskal(int V,vector<vector<int>>&edges){
    int r=edges.size();
 sort(edges.begin(), edges.end(), [](auto &a, auto &b){
        return a[2] < b[2];
    });
    vector<int>par(V+1);
    vector<int>rank(V+1,0);
    for(int i=1;i<V+1;i++){
        par[i]=i;
    }
     vector<vector<pair<int,int>>> mst(V+1);

        for(int i=0;i<r;i++){
            int u=edges[i][0],v=edges[i][1],w=edges[i][2];
            if(find(par,u)!=find(par,v)){
              mst[u].push_back({v,w});
              mst[v].push_back({u,w});
              Union(u,v,par,rank);
            }
        }
        return mst;
}
int MAX(int src, int dest, vector<vector<pair<int,int>>>& mst, vector<int>& vis) {
    if(src==dest)return 0;
    vis[src] = 1;
    for (auto &p : mst[src]) {
        int nxt = p.first, w = p.second;
        if (!vis[nxt]) {
            int res = MAX(nxt, dest, mst, vis);
            if (res != -1) return max(w, res);
        }
    }
    return -1;
}

int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
int T=t;
while (t--)
{
    int n,r;
    cin>>n>>r;
    vector<vector<int>>edges;
    for(int i=0;i<r;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
    }

    vector<vector<pair<int,int>>>mst=kruskal(n,edges);
    int q;
    cin>>q;
    cout<<"Case "<<T-t<<endl;
    while(q--){
        int k,dest;
        cin>>k>>dest;
        if(k==dest){
            cout<<0<<endl;
        }else{
            vector<int>vis(n+1,0);
            cout<<MAX( k,dest,mst,vis)<<endl;
        }

    }

    cout<<endl;
}

 
 return 0; }