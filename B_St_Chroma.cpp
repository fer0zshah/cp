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
    
    int n,k;
    cin>>n>>k;
    if(n==1){
        cout<<0<<endl;
        continue;
    }
    for(int i=0;i<n;i++){
        if(i==k)continue;
        cout<<i<<" ";
    }
    if(n!=k) cout<<k<<endl;
    else cout<<endl;
}
 
 return 0;
}