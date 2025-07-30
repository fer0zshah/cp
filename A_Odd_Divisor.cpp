#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define loop(i,a,b) for(int i=a;i<b;i++)
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    LL n;
    cin>>n;
    bool flag=false;

    while(n>1){
        if(n%2!=0){
            flag=true;
            break;
        }
        n/=2;
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
 
 return 0;
}