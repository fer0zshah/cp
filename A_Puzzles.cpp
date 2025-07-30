#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define loop(i,a,b) for(int i=a;i<b;i++)
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;

vector<int>v(m);
for(int i=0;i<m;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
// for(int i=0;i<m;i++){
//     cout<<v[i]<<" ";
// }cout<<endl;
// if(n==1){
//     cout<<v[0];
//     return 0;
// }
// for(int i=0;i<)
vector<int>diff;
int d;
for(int i=0;i<m-(n-1);i++){
    d=v[n+i-1]-v[i];
    diff.push_back(d);
}
// for(int i=0;i<m-(n-1);i++){
//     cout<<diff[i]<<" ";
// }cout<<endl;
// cout<<d<<endl;
int min=*min_element(diff.begin(),diff.end());
cout<<min<<endl;
 
 return 0;
}