#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 const int inf=1e9;
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int V;
        cin>>V;
        int n=V;
        vector<pair<int,int>>adjList[V+1];
        map<string ,int>mp;int u=1;
        while(n--){
            string s;
            cin>>s;
            int nei;
            cin>>nei;
            mp[s]=u;
            for(int i=0;i<nei;i++){
                int v,w;cin>>v>>w;
                adjList[u].push_back({v,w});
                adjList[v].push_back({u,w});
            }
            u++;
        }
       
        int q;cin>>q;
        while (q--){
            string ss,dd;
            cin>>ss>>dd;
            priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
            vector<int>dist(V+1,inf),vis(V+1,0);
            int src=mp[ss];int des=mp[dd];
            dist[src]=0;
            pq.push({0,src});
            while(!pq.empty()){
                  u=pq.top().second;
                  pq.pop();
                if(vis[u])continue;
                vis[u]=1;
                for(auto &nei:adjList[u]){
                    int v=nei.first;int w=nei.second;
                    if(w+dist[u]<dist[v]){
                        dist[v]=w+dist[u];
                        pq.push({dist[v],v});
                    }
                }
            }
            cout<<dist[des]<<endl;
        }
      
        
    }
 return 0; }