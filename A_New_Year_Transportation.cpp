#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
vector<int> dfs(vector<vector<int>>&edge,int V,int E){
    vector<vector<int>>adj(V);
    for(int i=0;i<edge.size();i++){
        int u=edge[i][0];
        int v=edge[i][1];
 
        adj[u].push_back(v);
        // adj[v].push_back(u);
    }
    vector<int>vis(V,0);
    stack<int>s;
    s.push(1);
    vis[1]=1;
    while(!s.empty()){
        int node=s.top();
        s.pop();
        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=1;
                s.push(it);
            }
        }
    }
    return vis;
}
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int V,d;
cin>>V>>d;
int E=V-1;
vector<vector<int>>edge(E,vector<int>(2));
for(int i=0;i<E;i++){
    int x;
    cin>>x;
    edge[i][0]=i+1;
    edge[i][1]=i+1+x;
}
vector<int>v=dfs(edge,V+1,E);


// for(int i=0;i<=V;i++){
//     cout<<v[i]<<" ";
// }
if(v[d]==1)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
// for(int i=0;i<E;i++){
//     for(int j=0;j<2;j++){
//         cout<<edge[i][j]<<" ";
//     }
//     cout<<endl;
// }
 
 return 0;
}