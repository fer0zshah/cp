#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    set<LL>s;
 for(LL i=0;i<=1e4;i++){
        s.insert(i*i*i);
 }
int t=1;
cin>>t;
while(t--){
    LL x;
    cin>>x;
    int f=0;
    for(LL i=1;i*i*i<x;i++){
        LL b=x-i*i*i;
        if(s.count(b)){
            f=1;break;
        }
    }
    if(f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
 
 return 0;
}