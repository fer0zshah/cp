

#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL find(LL x,vector<LL>&par){
    if(par[x]=x)return x;
    return par[x]=find(par[x],par);
}

void Union(LL u,LL v,vector<LL>&par,vector<LL>&rank){
    LL pu=find(u,par);
    LL pv=find(v,par);
    if(pu==pv)return;
    if(rank[pu]=rank[pv]){
        par[pv]=pu;
        rank[pu]++;
    }else if(rank[pu]<rank[pv])par[pu]=pv;
    else par[pv]=pu;
}
int y=0;
double kruskal(vector<vector<LL>>&edges,int V){
    int e=edges.size();
    sort(edges.begin(),edges.end(),[](auto &a,auto &b){
            return a[2]<b[2];
        });
    vector<LL>par(V+1),rank(V+1,0);
    for(int i=0;i<=V;i++)par[i]=i;
    double  cost=0;
    for(auto &it:edges){
        LL u=it[0];LL v=it[1];LL w=it[2];
        if(find(u,par)!=find(v,par)){
            cost+=w;
            y++;
            Union(u,v,par,rank);
        }
    }
    return cost;
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
   double cost=kruskal(edges,V);
   cout<<fixed<<setprecision(3)<<cost/y<<endl;
    y=0;
    return 0;
}
//6 4
//1 2 7
//3 4 8
//4 5 1
//4 3 100

#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL find(LL x,vector<LL>&par){
    if(par[x]=x)return x;
    return par[x]=find(par[x],par);
}

void Union(LL u,LL v,vector<LL>&par,vector<LL>&rank){
    LL pu=find(u,par);
    LL pv=find(v,par);
    if(pu==pv)return;
    if(rank[pu]=rank[pv]){
        par[pv]=pu;
        rank[pu]++;
    }else if(rank[pu]<rank[pv])par[pu]=pv;
    else par[pv]=pu;
}
int y=0;
double kruskal(vector<vector<LL>>&edges,int V){
    int e=edges.size();
    sort(edges.begin(),edges.end(),[](auto &a,auto &b){
            return a[2]<b[2];
        });
    vector<LL>par(V+1),rank(V+1,0);
    for(int i=0;i<=V;i++)par[i]=i;
    double  cost=0;
    for(auto &it:edges){
        LL u=it[0];LL v=it[1];LL w=it[2];
        if(find(u,par)!=find(v,par)){
            cost+=w;
            x++;
            Union(u,v,par,rank);
        }
    }
    return cost;
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
   double cost=kruskal(edges,V);
   cout<<fixed<<setprecision(3)<<cost/y<<endl;
    y=0;
    return 0;
}
//6 4
//1 2 7
//3 4 8
//4 5 1
//4 3 100
