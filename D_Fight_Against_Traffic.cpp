#include<bits/stdc++.h>
using namespace std;
int shortestPath(int s,int d,vector<vector<int>>&adjlist){
    int n=adjlist.size();
    vector<int>vis(n+1);
    queue<pair<int,int>>q;
    q.push({s,-1});
    vis[s]=1;
    map<int,int>mp;
    while(!q.empty()){
        int node=q.front().first;
        int p=q.front().second;
        mp[node]=p;
        q.pop();
        for(auto it:adjlist[node]){
            if(!vis[it]){
                q.push({it,node});
                vis[it]=1;
            }

        }
    }
  
    int curr=d,ans=0;
    while(curr!=-1){
       curr= mp[curr];
       ans++;
    }
    return ans;
}
int main()
{
    int n,m,s,d;
    cin>>n>>m>>s>>d;
    set<pair<int,int>>ex;
    vector<vector<int>>adjlist(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        ex.insert({u,v});
        ex.insert({v,u});
        adjlist[u].push_back(v);
        adjlist[v].push_back(u );

    }
    int ts=shortestPath(s,d,adjlist);
    vector<int>source(n-1,0);
     vector<int>des(n-1,0);
    for(int i=1;i<n;i++){
      
            int x=shortestPath(i,s,adjlist);
            int y=shortestPath(i,d,adjlist);
            source[i]=x;
            des[i]=y;

    }
   vector<pair<int,int>> remainingEdges;
for(int u = 1; u <= n; u++) {
    for(int v = u+1; v <= n; v++) {
        if(ex.find({u, v}) == ex.end()) {
            remainingEdges.push_back({u, v});
            // remainingEdges.push_back({v, u});
        }
    }
}



}