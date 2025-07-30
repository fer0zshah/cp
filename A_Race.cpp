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
    int a,x,y;
    cin>>a>>x>>y;
    vector<int>v;
    v.push_back(a);
    v.push_back(x);
    v.push_back(y);
    sort(v.begin(),v.end());
    if(a==v[1])cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
 
 return 0;
}