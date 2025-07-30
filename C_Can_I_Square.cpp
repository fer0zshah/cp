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
    LL n;cin>>n;
    vector<LL>v(n);
    LL sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    LL r=sqrt(sum);
    LL s=pow(r,2);
    // cout<<sum<<" "<<r<<" "<<s<<endl;
    if(s==sum)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
 
 return 0;
}