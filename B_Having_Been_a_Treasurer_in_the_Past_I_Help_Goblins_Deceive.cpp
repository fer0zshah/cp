#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  t;
cin>>t;
while(t--){
    LL n;
    cin>>n;
    string s;
    cin>>s;
    LL a=0,b=0;
    
    for(int i=0;i<n;i++){
        if(s[i]=='-')a++;
        else if(s[i]=='_') b++;
    }
    // if(a<2||b<1){
    //     cout<<0<<endl;
    //     continue;
    // }
    LL x=a/2;
    LL y=a-x;
   
    cout<<x*y*b<<endl;
}
 
 return 0;
}