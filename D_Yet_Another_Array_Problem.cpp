#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 int  main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
LL t;
cin>>t;
while(t--){
    LL n;
    cin>>n;
    vector<LL>v(n);
    for(LL i=0;i<n;i++){
        cin>>v[i];
    }
    LL p[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    LL f=0;
    LL ans=-1;
    for(LL i=0;i<25;i++){
        for(LL j=0;j<n;j++){
            if(v[j]%p[i]){
                f=1;
                break;
            }
        }
        if(f){
            ans=p[i];
            break;
        }
    }
    cout<<ans<<endl;
}
 
 return 0; }