#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m,k;
cin>>n>>m>>k;
vector<int>v(m);
for(int i=0;i<m;i++)cin>>v[i];
int x;
cin>>x;
int cc=0;
for(int i=0;i<m;i++){
    int r=x^v[i];
    int c=__builtin_popcount(r);
    if(c<=k)cc++;
}
cout<<cc;
 return 0;
}