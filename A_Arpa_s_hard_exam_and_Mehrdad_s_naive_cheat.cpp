#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
LL n;
cin>>n;
LL x=8;

LL ans=1;
while(n){
    if(n%2){
        ans=(ans*x)%10;
        n--;
    }else{
        x=(x*x)%10;
        n/=2;
    }
}
cout<<ans;

 return 0;
}