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
        LL n,k;
        cin>>n>>k;
        if(n%2==k%2){
            if((k*k)>n)cout<<"NO"<<"\n";
            else cout<<"YES"<<"\n";
        }else cout<<"NO"<<"\n";
    }
 
 return 0;
}