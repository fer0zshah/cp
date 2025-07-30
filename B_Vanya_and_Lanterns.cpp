#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
double n,l;
cin>>n>>l;
vector<double>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
double mx=v[1]-v[0];
for(int i=1;i<n-1;i++){
    if((v[i+1]-v[i])>mx)mx=v[i+1]-v[i];
}
double fi=v[0]-0;
double ei=l-v[n-1];
double ans=max(max(fi,ei),mx/2);
cout<<setprecision(20)<<ans<<endl;
 
 return 0;
}