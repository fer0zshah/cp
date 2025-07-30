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
    LL n;
    cin>>n;
    LL sum=0;
    LL total=n/2;
    while(total){
        sum=sum+(n*n-(n-2)*(n-2))*total;
        total--;
        n=n-2;
    }
    cout<<sum<<endl;
}
 
 return 0;
}