#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int find(int x,vector<int>&par){
    if(x==par[x]) return x;
    else return par[x]=find(par[x],par)
}
void Union(int u,int v){
    int Pu=find(u);
    int Pv=find(v);
    par[u]=v; 
 }
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int mx=max_element(v.begin(),v.end());
vector<int>par(mx+1);
for(int i=0;i<n;i++){
    par[v[i]]=v[i];
}
 
 return 0; }