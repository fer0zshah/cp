#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    LL n;
    cin>>n;
    vector<LL>v(n+1);
    map<LL,LL>mp; 
    for(int i=1;i<=n;i++){
        cin>>v[i];
        v[i]-=i;
        mp[v[i]]++;
    }
    LL ans=0;
    for(auto it:mp){
        ans+=((it.second*(it.second-1))/2);
    }
 
    cout<<ans<<endl;
    
}
 
 return 0;
}
