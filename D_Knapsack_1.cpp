#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL rec(LL i,LL cw,LL W,  vector<vector<LL>>&dp,vector<LL>&val,vector<LL>&wt){
    int n=val.size();
    if(i==n)return 0;
    if(dp[i][cw]!=-1)return dp[i][cw];
    LL pick=0;
    if(cw+wt[i]<=W)pick=val[i]+rec(i+1,cw+wt[i],W,dp,val,wt);
    LL notpick=rec(i+1,cw,W,dp,val,wt);
    return dp[i][cw]=max(pick,notpick);
}

LL knapsack(LL W,vector<LL>&val,vector<LL>&wt){
    int n=val.size();
    vector<vector<LL>>dp(n+1,vector<LL>(W+1,-1));
    return rec(0,0,W,dp,val,wt);
}
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
LL N,W;
cin>>N>>W;
vector<LL>wt,val;
for(int  i=0;i<N;i++){
    LL x,y;
    cin>>x>>y;
    wt.push_back(x);
    val.push_back(y);
}

LL ans=knapsack(W,val,wt);
cout<<ans<<endl;
 
 return 0; }