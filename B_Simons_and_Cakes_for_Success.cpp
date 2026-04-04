#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    LL n;
    cin>>n;
    int k=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)k*=i;
        while(n%i==0)n/=i;
    }
    cout<<k*n<<endl;
}
 
 return 0; }