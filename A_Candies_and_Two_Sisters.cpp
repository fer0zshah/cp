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
        LL n;
        cin>>n;
        if(n%2==0){
            cout<<n/2-1<<endl;
        }else{
            cout<<n/2<<endl;
        }
    }
 
 return 0;
}