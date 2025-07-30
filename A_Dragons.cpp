#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int s,n;
cin>>s>>n;
vector<pair<int,int>>v;
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    // cout<<x<<" "<<y<<endl;
    v.push_back(make_pair(x,y));
}
// for(int i=0;i<n;i++){
//     cout<<v[i].first<<" "<<v[i].second<<endl;
// }
sort(v.begin(),v.end());
// for(int i=0;i<n;i++){
//     cout<<v[i].first<<" "<<v[i].second<<endl;
// }
bool flag=false;
int i=0;
for(;i<n;i++){
    if(s<=v[i].first){
        flag=true;
        break;
    }
    s=s+v[i].second;
    // cout<<"s in "<<i<<" is"<<s<<endl;
}
// cout<<i<<endl;
if(!flag&&i==n)cout<<"YES";
else cout<<"NO";
 
 return 0;
}