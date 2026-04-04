#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int V,E;
cin>>V>>E;
vector<int>adjList[V+1];
vector<pair<int,int>>p(E);
for(int i=0;i<E;i++){
    int u,v;
    cin>>u>>v;
    p[i]={u,v};
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

queue<pair<int,int>>q;
int s=1;
int d=0;
vector<int>v(V+1,0);
vector<int>vis(V+1,0);
vis[1]=1;
q.push({s,d});
while(!q.empty()){
    int node=q.front().first;
    int dist=q.front().second;
    q.pop();
    for(auto &it:adjList[node]){
        if(!vis[it]){
            q.push({it,dist+1});
            vis[it]=1;
            v[it]=dist+1;
        }
    }
}
int c=0;
for(int i=0;i<E;i++){
    if(v[p[i].first]==v[p[i].second])c++;
}
cout<<c<<endl;
 
 return 0; }