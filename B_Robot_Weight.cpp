#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int x;
cin>>x;
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
set<int>s;
// cout<<x<<endl;
s.insert(x);
int q;
cin>> q;
vector<int>vis(n+1,0);
// cout<<q<<endl;
while(q--){
    int ind;
    cin>>ind;
    // cout<<v[ind-1]<<endl;
    if(vis[ind]){x-=v[ind-1];vis[ind]=0;}
    else {x+=v[ind-1];vis[ind]=1;}
    cout<<x<<endl;
}
 
 return 0; }