#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n-2;i++){
        int it=0;
        int xt=0;
        for(int j=i+1;j<n-1;j++){
            // cout<<i<<" "<<j<<"->"; 
            int sum=v[i]+v[j];
            it=lower_bound(v.begin(),v.end(),sum)-v.begin();
            xt=lower_bound(v.begin(),v.end(),(v[n-1]-sum+1))-v.begin();
            int d=it-xt;
            // cout<<"?"<<it<<" ";
            it=it-1-j; 
            // cout<<it<<" "<<dx<<endl;
            it=max(0,min(it,d));

            // cout<<it<<endl;
             ans+=it;
        }
    }
    cout<<ans<<endl;
}
 
 return 0;
}