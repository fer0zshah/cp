#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<LL>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    LL mn=0;
    for(int i=0;i<n;i++){
      if(v[i]<=0){
        mn++;
        v[i]=-v[i];
      }
    }
  
    LL s=0;
    for(int i=0;i<n;i++){
        s+=v[i];
    }
    sort(v.begin(),v.end());
    if(mn%2){
        cout<<s-2*v[0]<<endl;
    }else{
        cout<<s<<endl;
    }
}
 
 return 0;
}