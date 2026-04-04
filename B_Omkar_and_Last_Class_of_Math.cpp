#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    LL n;cin>>n;
    

    if(n%2==0){
        cout<<n/2<<" "<<n/2<<endl;
        continue;
    }
    LL a=1;
    for(LL i=2;i*i<=n;i++){
        if(n%i==0){
            a=n/i;break;
        }
    }
    cout<<a<<" "<<n-a<<endl;
}
 
 return 0; }