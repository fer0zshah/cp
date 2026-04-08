#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
       LL mx=1e6;
    vector<bool>p(mx+1,true);
    p[0]=p[1]=false;
    for(int i=2;i*i<mx+1;i++){
        if(p[i]){
            for(int j=i*i;j<mx+1;j+=i){
                p[j]=false;
            }
        }
    }
    vector<LL>v;
for(int i=2;i<mx+1;i++){
    if(p[i])v.push_back(i);
}
while(t--){
    int n;cin>>n;
 
    for(int i=1;i<=n;i++){
        cout<<v[i]*v[i-1]<<" ";
    }
    cout<<endl;
}
 
 return 0; }