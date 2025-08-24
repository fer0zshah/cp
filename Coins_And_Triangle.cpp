#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    LL n;
    cin>>n;
    LL l=0;LL r=10e9;
    LL ans=10e9;
    LL h=l-(l-r)/2;
    while(l<=r){
         h=l-(l-r)/2;
        LL req=((h-1)*h)/2+h;
        if(req<=n){
           l=h+1;
            ans=h;
        }else{
           
            r=h-1;
        }

    }
    cout<<ans<<endl;
}
 
 return 0; }