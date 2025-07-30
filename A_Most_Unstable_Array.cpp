#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 int t;
 cin>>t;
 while(t--){
    LL n,m;
    cin>>n>>m;
    if(n==1){
        cout<<0<<endl;
    }else if(n==2){
        cout<<m<<endl;
    }else{
        cout<<2*m<<endl;
    }
 }
 return 0;
}