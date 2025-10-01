#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t=2;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mn=min(a,b);
    int mx=max(a,b);
    c=c-a;
    d=d-b;
    int mm=min(c,d);
    int xx=max(c,d);
    int p=mn*2+2;
    int pp=mm*2+2;
    if((mx>p)||xx>pp)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


}
 
 return 0; }