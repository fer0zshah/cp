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
// sort(v.begin(),v.end());
vector<int>res;
for(int i=1;i<=n;i++){
    bool flag=false;
    for(int j=0;j<m;j++){
        if(i==v[j]){
            flag=true;            
        }
    }
    if(flag)continue;
    else{
     res.push_back(i);
    }
}
int len=res.size();
cout<<len<<endl;
for(int i=0;i<len;i++){
    cout<<res[i]<<" ";
}
 
 return 0;
}