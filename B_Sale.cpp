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
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
// for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
// }cout<<endl;
int sum=0;
int i=0;
while(m--){
    if(v[i]>0)break;
    sum+=v[i];
    i++;
} 
cout<<-1*sum;
 return 0;
}