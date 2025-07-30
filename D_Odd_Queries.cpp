#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,q;
    cin>>n>>q;
    vector<LL>v(n);
    vector<LL>p(n+1,0);
   
    for(int i=0;i<n;i++){
        cin>>v[i];
        p[i+1]=p[i]+v[i];
    }
    // for(int i=0;i<=n;i++){
    //     cout<<p[i]<<" ";
    // }cout<<endl;
    LL t=p[n];
    for(int i=0;i<q;i++){
        LL l,r,k,s=0;
        cin>>l>>r>>k;;
        LL diff=r-l+1;
        // for(int i=l-1;i<r;i++){ 
        //     s+=v[i];
        // }
        LL us=t-(p[r]-p[l-1]);
        LL cs=diff*k;
        LL ts=us+cs;
        if(ts%2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }



}
 
 return 0;
}