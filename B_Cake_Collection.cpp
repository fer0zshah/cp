#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
int t;
cin>>t;
while(t--){
    LL n,m;
    cin>>n>>m;
    vector<LL>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    LL sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i]*m;
        m--;
        if(m==0)break;
    }
    // if(m>0)sum+=v[n-1]*m;
    cout<<sum<<endl;

}
 return 0; }