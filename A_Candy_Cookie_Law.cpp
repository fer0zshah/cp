#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int a,b,c,d;
cin>>a>>b>>c>>d;
if(c<a)cout<<"No";
else {
    if(d>=b)cout<<"No";
    else cout<<"Yes";
}
 
 return 0; }