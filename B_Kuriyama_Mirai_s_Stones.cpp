#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<LL>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
vector<LL>w;
w=v;
sort(v.begin(),v.end());
vector<LL>pw(n+1,0);
vector<LL>pv(n+1,0);
for(int i=1;i<n+1;i++){
    pw[i]=pw[i-1]+w[i-1];
}
for(int i=1;i<n+1;i++){
    pv[i]=pv[i-1]+v[i-1];
}
int m;
cin>>m;
while(m--){
    int t,l,r;
    cin>>t>>l>>r;
    if(t==1){
        cout<<(pw[r]-pw[l-1])<<endl;
    }else{
        cout<<(pv[r]-pv[l-1])<<endl;
    }
}
 return 0;
}