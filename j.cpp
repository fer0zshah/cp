#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    double tax;
    cin>>tax;
        double ans=12500;
        if(!tax) ans=12500;
    else if(tax>0 && tax<=7500){
        ans=tax/.2+12500;
    }else if(tax>7500 && tax<=27500){
        ans=(tax-7500+(50000*0.4))/(0.4);
    }else if(tax>27500 && tax<=42500){
        ans=(tax+32500)/(.4+.5*.4);
    }else if(tax>42500){
        ans=(tax+15000)/.45;
    }
    // cout<<(tax-7500+(50000*0.4))/(0.4)<<endl;
    cout<<fixed<<setprecision(6)<<ans<<endl;
}
 
 return 0; }