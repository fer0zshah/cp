#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>v(n);
int mp[5]={0};
for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
}
// cout<<mp[1]<<endl;
    mp[1]= max(0,mp[1]-mp[3])+2*(mp[2]%2);
    // cout<<mp[1]<<endl;
    int ans=mp[4]+mp[3]+mp[2]/2+mp[1]/4;
    if(mp[1]%4)cout<<ans+1<<endl;
    else cout<<ans<<endl;
 return 0;
}