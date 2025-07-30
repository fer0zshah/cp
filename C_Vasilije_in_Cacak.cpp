#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
while(t--)
{
    LL n,k;
    LL x;
    cin>>n>>k>>x;
    LL ms=((k*(k+1))/2);
    k=n-k;
    LL mx=((n*(n+1))/2)-((k*(k+1))/2);
    if(ms>mx)swap(mx,ms);
    // cout<<ms<<" "<<mx<<endl;
    if(x>=ms&&x<=mx){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
 
 return 0;
}