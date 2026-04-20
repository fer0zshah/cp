#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
LL n,t;
cin>>n>>t;
vector<LL>v(n);
for(int i=0;i<n;i++)cin>>v[i];
LL r=0,ans=0,s=0;
for(int i=0;i<n;i++){
    while(r<n&&(s+v[r])<=t){
        s+=v[r];
        r++;
    }
    ans=max(ans,r-i);
    s-=v[i];
}
cout<<ans<<endl;
 
 return 0; }