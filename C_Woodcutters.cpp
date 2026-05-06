#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n;
cin >> n;   
vector<pair<LL,LL>>v(n);
for(int i=0;i<n;i++)cin>>v[i].first>>v[i].second;
int ans=0;
LL left=v[1].first-v[0].first;
LL right;
for(int i=1;i<n-1;i++){
     right=v[i+1].first-v[i].first;
    if(v[i].second<left)ans++;
    else if(v[i].second<right){
        ans++;
        right=v[i+1].first-(v[i].second+v[i].first);
    }
    left=right;
}
    cout<<ans+2<<endl;
    return 0;
}