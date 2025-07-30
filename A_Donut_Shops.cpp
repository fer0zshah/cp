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
    double a,b,c;
    cin>>a>>b>>c;
    double e=c/b;
    LL s=-1,f=-1;
    if(c>a){
        f=1;
    }
    if(a*b>c){
        s=b;
    }
        
    
    cout<<f<<" "<<s<<endl;
}
 
 return 0;
}