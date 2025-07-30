#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
int b,g;
cin>>b;
set<int>boy;
if(b==0)boy.insert(0);
for(int i=0;i<b;i++ ){
    int x;cin>>x;
    boy.insert(x);
}
cin>>g;
set<int>girl;
if(g==0)girl.insert(0);
for(int i=0;i<g;i++ ){
    int x;cin>>x;
    girl.insert(x);
}
int l=(m*n);
for(int i=0;i<l;i++){
    int br=i%n;
    int gr=i%m;
    if(boy.count(br)||girl.count(gr)){
        boy.insert(br);
        girl.insert(gr);
    }
}
// for(auto it:boy)cout<<it<<" ";
// cout<<endl;
// for(auto it:girl)cout<<it<<" ";
// cout<<endl;
if(n==boy.size()&&m==girl.size())cout<<"Yes";
else cout<<"No";

 return 0;
}