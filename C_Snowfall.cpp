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
vector<LL> a(n),six,two,three,oth;
for(LL i=0;i<n;i++) cin>>a[i];
for(LL i=0;i<n;i++){
    if(a[i]%6==0) six.push_back(a[i]);
    else if(a[i]%2==0) two.push_back(a[i]);
    else if(a[i]%3==0) three.push_back(a[i]);
    else oth.push_back(a[i]);
}
for(int i=0;i<six.size();i++) cout<<six[i]<<" ";
for(int i=0;i<two.size();i++) cout<<two[i]<<" ";
for(int i=0;i<oth.size();i++) cout<<oth[i]<<" ";
for(int i=0;i<three.size();i++) cout<<three[i]<<" ";
cout<<endl;
}
    return 0;
}