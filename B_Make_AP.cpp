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
    int a,b,c;
    cin>>a>>b>>c;
    if((2*b-c)>0&&(2*b-c)%a==0){
        cout<<"YES"<<endl;
    }else if((2*b-a)>0&&(2*b-a)%c==0){
        cout<<"YES"<<endl;
    }else if((a+c)>0&&(a+c)%(2*b)==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;

    }
}
 return 0;
}