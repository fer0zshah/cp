#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
int N=n;
int s=0;
while(n>=m){
   s+=n/m;
   if(n%m==0){
    n/=m;
   }else{
    n=(n/m)+(n%m);
   }
}
cout<<s+N<<endl;
 return 0;
}