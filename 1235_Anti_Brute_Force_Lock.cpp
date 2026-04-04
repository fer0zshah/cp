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
    if(rank[pu]==rank[pv]){
        par[pu]=pv;
        rank[pv]++;
    }else if(rank[pu]<rank[pv]){
        par[pu]=pv;
    }else{
        par[pv]=pu;
    }
}
    int kruskal(vector<vector<int>>&edges,int n){
        int e=edges.size();
        sort(edges.begin(),edges.end(),[](auto &a,auto &b){
            return a[2]<b[2];
        } );
        vector<int>par(n+1),rank(n+1,0);
        for(int i=0;i<n+1;i++)par[i]=i;
        int sum=0;
        for(int i=0;i<e;i++){
            int u=edges[i][0],v=edges[i][1];int w=edges[i][2];
            if(find(par,u)!=find(par,v)){
                sum+=w;
                Union(u,v,par,rank);
            }
        }
        return sum;
    }
int dist(string u,string v){
    int total=0;
    for(int i=0;i<4;i++){
        int uu=u[i]-'0';
        int vv=v[i]-'0';
        int diff=abs(uu-vv);
        total+=min(diff,10-diff);
    }
    return total;
}
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>node(n);
        // node[0]="0000";
        for(int i=0;i<n;i++){
            cin>>node[i];
        }
        vector<vector<int>>edges;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                edges.push_back({i,j,dist(node[i],node[j])});
            }
        }
        int ans=kruskal(edges,n+1);
        int minStart = INT_MAX;
        for(int i=0;i<n;i++){
            minStart = min(minStart, dist("0000", node[i]));
        }
        cout<<ans+minStart<<endl;

    }
 
 return 0; }