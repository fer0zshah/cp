#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n,m,l,r;
    cin>>n>>m>>l>>r;
    int mi=min(abs(l),r);
    int d=n-m;
    if(mi-d<0){
        if(abs(l)==mi) cout<<0<<" "<<r-(d-mi)<<endl;
        else{
            cout<<l+(d-mi)<<" "<<0<<endl;
        }
    }else{
        if(abs(l)==mi){
            cout<<l<<" "<<r-d<<endl;
        }else{
            cout<<l+d<<" "<<r<<endl;
        }
    }

}
 
 return 0;
}