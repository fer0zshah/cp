#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    
    LL D=0;
    while(a&&b){
        int mx=max(a,b);
        int mn=a+b-mx;
        int diff=min(mx-mn,mn);
        if(diff==0){
            // diff=mx/3;
            // cout<<D<<endl;
            D+=2*mx/3;break;
            // cout<<D<<endl;

        }
        a=mx-2*diff;
        b=mn-diff;
        D+=diff;
    }
    // cout<<a<<" "<<b<<endl;
    cout<<D<<endl;
}
 
 return 0; }