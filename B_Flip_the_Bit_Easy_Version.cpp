#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while (t--)
{
    int n,k,p;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>p;
    int cl=0;int pv=v[p-1];
  for (int i = p - 2; i >= 0; i--) {
    if (v[i] != pv) {
        cl++;
        pv = v[i];
    }
}
    int cr=0;int nx=v[p-1];
    for(int i=p;i<n;i++){
        if(v[i]!=nx)cr++;
        nx=v[i];
    }
    // cout<<cl<<" "<<cr<<endl;
    int ans=max(cl,cr);
    if(ans%2)ans++;
    cout<<ans<<endl;

}

 
 return 0; }