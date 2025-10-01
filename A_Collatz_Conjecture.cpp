#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    int k,x;
    cin>>k>>x;
    int p=1;
    for(int i=0;i<k;i++){
        p=p*2;
    }
    // cout<<p<<endl;
    int n=x*p;
    cout<<n<<endl; 

}
 
 return 0;
 }