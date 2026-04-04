#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
LL n;
cin>>n;
vector<LL>v(n);
for(LL i=0;i<n;i++)cin>>v[i];
sort(v.begin(),v.end());
LL f=v[0],l=v[n-1];
LL cf=0,cl=0;
for(LL i=0;i<n;i++){
    if(v[i]==f)cf++;
}
for(LL i=n-1;i>=0;i--)if(v[i]==l)cl++;
LL x=cf*cl;

if(l==f){
    cout<<0<<" "<<n*(n-1)/2<<endl;
}else{
    cout<<l-f<<" "<<x<<endl;
}
 
 return 0; }