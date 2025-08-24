#include<bits/stdc++.h>
using namespace std;
int find(int node,vector<int>&p){
    if(p[node]!=node){
        p[node]=find(p[node],p);
    }
    return p[node];
}
void unionset(int u,int v,vector<int>&p){
    int ru=find(u,p);
    int rv=find(v,p);
    if(ru!=rv){
        p[ru]=rv;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>p(n+1);
    for(int i=1;i<=n;i++){
        p[i]=i;
    }
    while(m--){
        int k;
        cin>>k;
        if(k==0)continue;
        int u;
        cin>>u;
     
        for(int i=1;i<k;i++){
            int v;
            cin>>v;
            unionset(u,v,p);
        }
    }
    map<int,int>mp;

    for(int i=1;i<=n;i++){
        int r=find(i,p);
        mp[r]++;
    }
    for(int i=1;i<=n;i++){
        int r=find(i,p);
        cout<<mp[r]<<" ";
    }
    cout<<endl;

}