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
    int a;cin>>a;
    int n=360/(180-a);
    int aa=((n-2)*180)/n;
    if(aa==a)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 
 return 0;
}