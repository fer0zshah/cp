#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        LL n,k;
        cin>>n>>k;
        LL mn=n;
        for(LL i=1;i*i<=n;i++){
            if(n%i==0){
                if(i<=k)mn=min(mn,n/i);
                if(n/i<=k)mn=min(mn,i);
            }
        }
        cout<<mn<<endl;
    }
 return 0; }