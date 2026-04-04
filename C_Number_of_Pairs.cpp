#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    LL n,l,r;
    cin>>n>>l>>r;
    vector<LL>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    LL c=0;
    for(int i=0;i<n-1;i++){
        c+=(upper_bound(v.begin()+i+1,v.end(),r-v[i])-v.begin());
        c-=(lower_bound(v.begin()+i+1,v.end(),l-v[i])-v.begin());
    }
    cout<<c<<endl;
    
}
 
 return 0; }