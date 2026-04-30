#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
LL t;
cin>>t;
while (t--){
    LL n;
    cin>>n;
    vector<LL> a(n);
    LL sum=0;
    for (LL i=0; i < n; i++){
        cin>>a[i];
         sum+=a[i];
    }
    int i;
    for( i=n-1;i>=0;i--){
        if(a[i]<=a[i-1]){
            break;
        }
    }
    LL um=i*a[i];
    for(int j=i;j<n;j++){
         um+=a[i];
    }
    cout<<sum-um<<endl;
    
}
    return 0;
}