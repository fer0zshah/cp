#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n,d;
cin>>n>>d;
vector<pair<LL,LL>>v(n);
for(int i=0;i<n;i++)cin>>v[i].first>>v[i].second;
sort(v.begin(),v.end());
LL l=0;
LL sum=0,mx=0;
for(LL r=0;r<n;){
    if(v[r].first-v[l].first<d){
        sum+=v[r].second;
        r++;
    }
    else{
        mx=max(mx,sum);
        sum-=v[l].second;
        l++;
    }
}


mx=max(mx,sum);
cout<<mx<<endl;


    return 0;
}