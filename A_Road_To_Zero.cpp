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
    LL x,y;
    cin>>x>>y;
    LL a,b;
    cin>>a>>b;
    LL total=0;
    if(x!=y){
            total=abs((x-y)*a);
            // cout<<total<<endl;
            if(x<y)y=x;
            else x=y;
           
    }
     if(x!=0){
        if(2*a<b){
            total+=2*a*x;
        }else{
            total+=b*x;
        }
     }
    cout<<total<<endl;
}
 
 return 0;
}