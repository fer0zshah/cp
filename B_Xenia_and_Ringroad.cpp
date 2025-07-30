#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
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
LL sum=v[0];
for(int i=1;i<m;i++){
    if(v[i-1]>v[i]){       
        sum=sum+(n-v[i-1])+v[i];
    }else{
        sum=sum+(v[i]-v[i-1]);
        // cout<<sum<<endl;
    }
}
cout<<sum-1<<endl;
 return 0;
}