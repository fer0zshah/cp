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
    int l1,b1,l2,b2,l3,b3;
    cin>>l1>>b1>>l2>>b2>>l3>>b3;
    LL a1=l1*b1;  LL a2=l2*b2;  LL a3=l3*b3;
    int A=sqrt(a1+a2+a3);
    int f=0;
    if(A*A==(a1+a2+a3)){
        f=1;
    }
    if(f){
        if(l1==l2&&l2==l3&&(b1+b2+b3==l1)){
            cout<<"YES"<<endl;
        }else if(b1==b2&&b2==b3&&(l1+l2+l3==b1)){
            cout<<"YES"<<endl;
        }else if(b1==(b2+b3)&&(l1+l2)==b1){
            cout<<"YES"<<endl;
        }else if(l1==(l2+l3)&&(b1+b2)==l1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }

 }
 return 0;
}
