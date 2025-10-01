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
    if(a%b==0||b%a==0){
        if(a==b)cout<<0<<endl;
        else cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
}
 
 return 0; }