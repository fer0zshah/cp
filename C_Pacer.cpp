#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    LL n,m;
    cin>>n>>m;
    LL sum=0;
    LL x=0,y=0;
    while(n--){
        LL a,b;
        cin>>a>>b;
        LL d=a-x;
        LL D=abs(b-y);

        if(d%2==D%2){
            sum=sum+d;
        }else{
            sum=sum+d-1;
        }
        x=a;
        y=b;
    }
    LL f=m-x;
    // if(m%2==y%2)
    sum=sum+f;
    // else sum=sum+f-1;
    cout<<sum<<endl;

}
 
 return 0; }
