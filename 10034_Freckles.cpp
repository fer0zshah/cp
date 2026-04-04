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

double  kruskal(vector<vector<double>>&edges,int V){
    int e=edges.size();
    sort(edges.begin(),edges.end(),[](auto &a,auto &b){
        return a[2]<b[2];
    });
    vector<int>par(V+1),rank(V+1,0);
    for(int i=1;i<V+1;i++)par[i]=i;
     double cost=0;
    for(int i=0;i<e;i++){
        int u=edges[i][0];int v=edges[i][1];double w=edges[i][2];
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
double dest(pair<double,double>u,pair<double,double>v){
    return (sqrt((u.first-v.first)*(u.first-v.first)+(u.second-v.second)*(u.second-v.second)));
}
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
int f=0;
while(t--){
    if(f==0)f=1;
    else cout<<endl;
    int V;
    cin>>V;
    map<int,pair<double,double>>mp;
    for(int i=1;i<=V;i++){
        double x,y;
        cin>>x>>y;
        mp[i]={x,y};
    }
    vector<vector<double>>edges;
    for(double i=1;i<=V;i++){
        for(double j=1;j<=V;j++){
            if(i!=j){
                edges.push_back({i,j,dest(mp[i],mp[j])});
            }
        }
    }
    double cost=kruskal(edges,V);
    cout<<fixed<<setprecision(2)<<cost<<endl;
}
 
 return 0; }