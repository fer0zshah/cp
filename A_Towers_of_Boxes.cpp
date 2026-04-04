#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {

ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while (t--)
    {
       int  n,m,d;
       cin>>n>>m>>d;
       int x=(d/m+1);
    //    cout<<x<<endl;
       if(n%x==0)cout<<n/x<<endl;
       else cout<<n/x+1<<endl;
    }
    
 
 return 0; }