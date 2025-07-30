#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
bool isPrime(LL n){
    if(n<=1)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
       
    }
    return true;
}
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    LL n,k;
    cin>>n>>k;
   if(k>1){
        if(k==2&&n==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
   }else{
    if(n==1&&k==1){
        cout<<"NO"<<endl;
        continue;
    }
    if(isPrime(n)){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
   }
    
}
 
 return 0;
}