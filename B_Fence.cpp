#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,k;
cin>>n>>k;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
vector<LL>ps(n,0);
for(int i=1;i<n;i++){
    ps[i]=v[i-1]+ps[i-1];
}
ps.push_back(v[n-1]+ps[n-1]);
// for(int i=0;i<n+1;i++){
//     cout<<ps[i]<<" ";
// }
vector<int>s;
for(int i=0;i<n-k+1;i++){
    s.push_back(ps[k+i]-ps[i]);
}
    int mi=0;
for(int i=0;i<n-k+1;i++){
   if(s[i]<s[mi]){
      mi=i;  
   }
}

cout<<mi+1<<endl;

 
 return 0;
}