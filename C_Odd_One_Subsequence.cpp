#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
// LL f(LL n){
//     if(n==0)return 1;
//     LL p=1;
//     for(LL i=n;i>=1;i--)p*=i;
//     return p;
// }
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
LL n;
cin>>n;
vector<LL>v(n);
map<LL,LL>mp;
for(LL i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
}
LL sum=0;
for(auto it:mp){
    LL x=it.second;
    if(x>=2){
        sum+=((n-x)*((x*x-x)/2));
    }
}
cout<<sum<<endl;




 return 0; }