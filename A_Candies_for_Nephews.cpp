#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n%3){
        cout<<3-(n%3)<<endl;
    }else cout<<0<<endl;
}
 
 return 0; }