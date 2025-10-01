#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    LL n,m,x,y;
    cin>>n>>m>>x>>y;
    vector<int>vx(n);
    vector<int>vy(m);
    for(int i=0;i<n;i++){
        cin>>vx[i];
    }
    for(int i=0;i<m;i++){
        cin>>vy[i];
    }
    LL p=lower_bound(vx.begin(),vx.end(),x)-vx.begin();
    LL q=lower_bound(vy.begin(),vy.end(),y)-vy.begin();
    cout<<n+m<<endl;
}
 
 return 0; }