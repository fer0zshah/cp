#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)

{return (a.second<b.second);}
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>p(n);
vector<int>q(n);
for(int i=0;i<n;i++){
   cin>>p[i];
}
for(int i=0;i<n;i++){
   cin>>q[i];
}

vector<pair<int,int>>vp(n);
for(int i=0;i<n;i++){
    vp[i]={p[i],q[i]};
}

sort(vp.begin(),vp.end(),sortbysec);
for(int i=0;i<n;i++){
  cout<<q[vp[i].first-1]<<" ";  
}

 return 0;
}