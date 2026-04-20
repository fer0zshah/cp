#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 int t;
 cin>>t;
 while(t--){
    LL n,x,y;
    cin>>n>>x>>y;
    LL lcm=(x*y)/(__gcd(x,y));
    LL cx=n/x,cy=n/y,cl=n/lcm;
    LL m=cx-cl;
    LL p=cy-cl;
    LL sum=(p*(p+1))/2;
    LL s=(n*(n+1))/2-((n-m)*((n-m)+1))/2;
    cout<<s-sum<<endl;


 }
 return 0; }