#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n,x;
cin>>n>>x;
vector<int>v(n);
for(int i=0;i<=n;i++)cin>>v[i];
int var=v[0];
cout<<0<<" "<<v[0]<<endl;
for(int i=1;i<=n;i++){
    if(abs(var-v[i])>=x){
        cout<<i<<" "<<v[i]<<endl;
        var=v[i];
    }
}
 
 return 0; }