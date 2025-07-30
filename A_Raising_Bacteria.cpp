#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
LL x;
cin>>x;
// vector<LL>v;
// while(x>0)
// {
//     LL d=x%2;
//     v.push_back(d);
//     x/=2;
// } 
// reverse(v.begin(),v.end());
// int count=0;
// for(int i=0;i<v.size();i++){
//     if(v[i]==1){
//         count++;
//     }
// }
int count=0;
int ans=0;
int i=0;
while(x>0){
   int bit=x&1;
   ans=(bit*pow(10,i))+ans;
   x=x >>  1;
   i++;
}
cout<<ans<<endl;
 return 0;
}