#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
LL r,n;
cin>>r>>n;
vector<LL>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}


LL sum=0;
LL p2=r;
bool flag=false;
for(int i=0;i<n;i++){
    if( (sum+v[i])>r){
        sum=r;
        p2=r;
    }else if((sum+v[i])<0){
        sum=0;
        p2=0;
    }else{      
        sum+=v[i];
    }
    if( (p2+v[i])>r){
        p2=r;
    }else if((p2+v[i])<0){
        p2=0;
    }else{       
        p2+=v[i];
    }
    if(sum==p2) flag=true;
}
if(!flag){
    cout<<"uncertain";
}else cout<<sum;

 
 return 0;
}