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
for(int i=0;i<n;i++){
    cin>>v[i];
}
for(int i=1;i<n;i++){
    v[i]=v[i-1]+v[i];
}
int m;
cin>>m;
while(m--){
    int q;
    cin>>q;
    int ans=lower_bound(v.begin(),v.end(),q)-v.begin();
    cout<<ans+1<<endl;
}
 
 return 0;
}