#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    LL n,a=-1,b=-1,c=-1;
    cin>>n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a=i;
            n/=i;break;
        }
    }
        if(a==-1){
            cout<<"NO"<<endl;
            continue;
        }
    for(int i=a+1;i*i<=n;i++){
        if(n%i==0){
            b=i;
            n/=i;
            break;
        }
    }
   
    c=n;
    if(b!=-1&&c>b){
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }else cout<<"NO"<<endl;


}
 
 return 0; }