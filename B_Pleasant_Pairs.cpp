#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
        ios_base::sync_with_stdio(false); 
        cin.tie(0); 
        cout.tie(0);
    LL t;
    cin>>t;
    while (t--)
    {

        LL n;
        cin>>n;
        vector<LL> a(n+1);
        for (LL i=1; i <=n; i++)cin>>a[i];
        LL c=0;
        for(LL i=1; i <= n; i++){
           for(LL j=i+1;j*a[i]-i<=n;j++){
                LL k=a[i]*j-i;
                if(a[i]*a[k]==i+k) c++;
           }
        }
        cout<<c<<endl;
    }
    
    return 0;
}