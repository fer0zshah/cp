#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t ;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<LL>v(n);
    map<LL,LL>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i%2)v[i]*=-1;
    }
    LL ps=0 ,f=0;
    mp[0]=1;
    for(int i=0;i<n;i++ ){
        ps+=v[i];
        if(mp[ps]){
            cout<<"YES"<<endl;
            f=1;break;
        }
        mp[ps]++;
    }
         if(f)continue;
         else cout<<"NO"<<endl;


}
 
 return 0; }