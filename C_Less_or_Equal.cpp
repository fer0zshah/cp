#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    LL n,k;
    cin>>n>>k;
    vector<LL>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    if(k==0&&v[0]>1){
        cout<<1<<endl;
        return 0;
        }
    LL ans=v[k-1];
    // cout<<ans<<endl;
    LL idx=upper_bound(v.begin(),v.end(),ans)-v.begin()-1;
    if(idx==k-1)cout<<ans<<endl;
    else cout<<-1<<endl;
 return 0; }