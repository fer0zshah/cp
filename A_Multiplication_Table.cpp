#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
LL n,x;
cin>>n>>x;
if(x>n*n){
    cout<<0;
    return 0;
}
int count=0;
for(int i=1;i<=n;i++){
    if(x%i==0&&(x/i)<=n){
        // cout<<i<<endl;
        // cout<<x/i<<endl;
        count++;
    }
}
cout<<count;
 return 0;
}