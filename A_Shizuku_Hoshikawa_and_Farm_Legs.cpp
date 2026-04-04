#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    if(n%2){
        cout<<0<<endl;
        continue;
    }
    cout<<n/4+1<<endl;
}
 
 return 0; }