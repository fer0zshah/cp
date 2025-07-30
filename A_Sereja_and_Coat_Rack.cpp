#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,d;
cin>>n>>d;
vector<int>v(n);
LL s=0;
for(int i=0;i<n;i++){
    cin>>v[i];
    s+=v[i];
}
int m;
cin>>m;
if(m>n)cout<<s-((m-n)*d)<<"\n";
else{
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=0;i<m;i++)sum+=v[i];
    cout<<sum<<endl;
}
 return 0;
}