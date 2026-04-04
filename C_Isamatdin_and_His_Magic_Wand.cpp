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
    vector<LL>v(n);
    int o=0,e=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2)o=1;
        else e=1;
    }
    if(o==1&&e==1){
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }cout<<endl;
    }else{
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

}
 
 return 0; }