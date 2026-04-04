#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    map<int,int>ss,tt;
    for(int i=0;i<n;i++){
        ss[s[i]]++;
        tt[t[i]]++;
    }
    // if(ss.size()!=tt.size()){
    //     cout<<"NO"<<endl;
    //     continue;
    // }
    //     for(auto it:ss){
    //         cout<<it.first<<"-> "<<it.second<<endl;
    // }
    //       for(auto it:tt){
    //         cout<<it.first<<"-> "<<it.second<<endl;
    // }
    int f=0;
    for(int i=0;i<n;i++){
        // cout<<ss[s[i]]<<" "<<tt[s[i]]<<endl;
        if(ss[s[i]]!=tt[s[i]]){
            f=1;
            break;
        }
    }

    if(!f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   
}
 
 return 0; }