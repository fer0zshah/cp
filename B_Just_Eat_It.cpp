#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL kadan(vector<LL>&v,int l,int h){
    LL r=v[l];
    LL mxE=v[l];
    for(int i=l+1;i<=h;i++){
        mxE=max(v[i],mxE+v[i]);
        r=max(r,mxE);
    }
    return r;
}
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<LL>v(n);
    LL ts=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        ts+=v[i];
    }
    LL fs=kadan(v,0,n-2);
    LL ls=kadan(v,1,n-1);
    if(ts<=fs||ts<=ls)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
 
 return 0; }