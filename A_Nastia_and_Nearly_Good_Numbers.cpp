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
    LL a,b,x,y,z;
    cin>>a>>b;
    if(b==1){
        cout<<"NO"<<endl;
        continue;
    }
    for(int i=1;;i++){
        z=i*a*b;
        x=a;
        y=z-x;
        if(x!=y){
            break;
        }

    }
    cout<<"YES"<<endl;
    cout<<x<<" "<<y<<" "<<z<<endl;
}
 
 return 0;
}