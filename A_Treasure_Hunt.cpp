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
    LL x,y,a;
    cin>>x>>y>>a;
    LL s=0;
    // LL d=a/(x+y);
    LL r=a%(x+y);
    if(x>r){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
 
 }
 return 0;
}