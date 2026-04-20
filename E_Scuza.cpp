#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        LL n,q;
        cin>>n>>q;
        vector<LL> a(n),mxa(n);
        LL mx=0;
        for(LL i=0;i<n;i++){
            cin>>a[i];
            mx=max(mx,a[i]);
                mxa[i]=mx;
        }
     
      for(int i=1;i<n;i++){
        a[i]+=a[i-1];
      }
        // for(int i=0;i<n;i++)cout<<a[i]<<" ";
        // cout<<endl;
        //  for(int i=0;i<n;i++)cout<<mxa[i]<<" ";
        // cout<<endl;
        while(q--){
            LL k;
            cin>>k;
            LL idx=upper_bound(mxa.begin(),mxa.end(),k)-mxa.begin()-1;
            // cout<<k<<"->"<<idx<<"->";
            if(idx==-1)
            cout<<0<<" ";
            else
            cout<<a[idx]<<" ";
            // cout<<endl;
        }
        cout<<endl;
    }
 
 return 0; }