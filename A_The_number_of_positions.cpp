#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,a,b;
cin>>n>>a>>b;
int ans;
ans=n-a;
if(ans>b)ans=b+1;

 cout<<ans<<endl;
 return 0;
}