#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 int t;
 cin>>t;
 int T=t;
 while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n==1){
        cout<<"Case #"<<T-t<<": "<<0<<endl;
        continue;
    }
    int mxd=0;
    for(int i=0;i<n-1;i++){
        if(mxd<abs(v[i+1]-v[i]))mxd=abs(v[i+1]-v[i]);
    }
    cout<<"Case #"<<T-t<<": "<<mxd<<endl;
 }
 return 0; }