#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL inf=1e15;
vector<LL>dijkstra(vector<vector<pair<LL,LL>>>& adjList,int p,int src){
        vector<LL>dist(p+1,inf);
        dist[src]=0;
        vector<int>vis(p+1,0);
        priority_queue<pair<LL,LL>,vector<pair<LL,LL>>,greater<pair<LL,LL>>>pq;
        pq.push({0,src});
        while(!pq.empty()){
            int node=pq.top().second;
            pq.pop();
            if(vis[node])continue;
            vis[node]=1;
            for(auto &it:adjList[node]){
                if(dist[it.first]>dist[node]+it.second){
                    dist[it.first]=dist[node]+it.second;
                    pq.push({dist[it.first],it.first});
                }
            }
        }
        return dist;
}
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p;
        cin>>p;
        vector<pair<LL,LL>>adjList[p+1];
        // vector<string>city(p+1);
        map<string,int>city;
        for(int i=0;i<p;i++){
            string s;
            cin>>s;
            city[s]=i+1;
            int e;
            cin>>e;
            for(int j=0;j<e;j++){
                int u=i+1,v,w;
                cin>>v>>w;
                adjList[u].push_back({v,w});
                adjList[v].push_back({u,w});
            }
        }
        int q;
        cin>>q;
        while(q--){
            string ss,ds;
            cin>>ss>>ds;
            int src=city[ss];
            int des=city[ds];
            vector<LL>dist=dijkstra(adjList,p,src);
            cout<<dist[des]<<endl;
        }

 


    }
    return 0;
}