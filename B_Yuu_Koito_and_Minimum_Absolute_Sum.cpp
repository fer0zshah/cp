#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    if(v[0]==-1&&v[n-1]==-1){
        v[0]=0;v[n-1]=0;
    }else if(v[0]==-1)v[0]=v[n-1];
    else if(v[n-1]==-1)v[n-1]=v[0];
      for(int i=0;i<n;i++){
        if(v[i]==-1)v[i]=0;
    }
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=(v[i+1]-v[i]);
    }
    cout<<abs(sum)<<endl;
    for(int i=0;i<n;i++)cout<<v[i]<<" ";cout<<endl;

}
 
 return 0; }