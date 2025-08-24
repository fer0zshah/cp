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
        LL l=0,r=10e9+1;
        int ans=0;
        while(l<=r){
            LL mid=l-(l-r)/2;
            LL val=mid*mid;
            if(val<n){
                ans=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        } 
    }
 
 return 0; }