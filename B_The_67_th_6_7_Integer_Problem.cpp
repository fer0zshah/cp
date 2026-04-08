#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    int n=7;
    vector<LL>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int s=0;
    for(int i=0;i<n-1;i++)s+=(v[i]*-1);
    s+=v[n-1];
    cout<<s<<endl;
}
 
 return 0; }