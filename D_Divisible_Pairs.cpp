#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    LL n,x,y;
    cin>>n>>x>>y;
    vector<LL>v(n);
    map<pair<LL,LL>,LL>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    LL c=0;
    for(int i=0;i<n;i++){
        LL rx=v[i]%x;
        LL ry=v[i]%y;
        LL tx=(x-rx)%x;
        LL ty=ry;
        c+=mp[{tx,ty}];
        mp[{rx,ry}]++;
    }
    cout<<c<<endl;
}
 
 return 0; }