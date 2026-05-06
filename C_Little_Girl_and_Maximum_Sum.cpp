#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n,q;
cin>>n>>q;
vector<LL>v(n+1),diff(n+2,0);
for(int i=1;i<=n;i++)cin>>v[i];

while(q--){
    LL l,r;
    cin>>l>>r;
    diff[l]++;
    diff[r+1]--;
}
for(int i=1;i<=n;i++)diff[i]+=diff[i-1];
// for(auto it:diff)cout<<it<<" ";
sort(diff.begin(),diff.end(),greater<LL>());
sort(v.begin(),v.end(),greater<LL>());
LL total=0;
for(int i=0;i<n;i++)total+=v[i]*diff[i];
cout<<total<<endl;
    return 0;
}