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
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool f=false;
    for(int i=1;i<n;i++){
        if(v[i-1]==0&&v[i]==0){
            f=true;
            break;
        }
    }
    if(f){
        cout<<"YES"<<endl;
        continue;
    }
    int cz=0;
    for(int i=0;i<n;i++){
        if(v[i]==0)cz++;
    }
    int co=n-cz;
    if(co==n||cz==n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    

 }
 return 0;
}