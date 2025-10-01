#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    LL n,m;
    cin>>n>>m;
    string s;cin>>s;
    set<LL>v;
    for(int i=0;i<m;i++){
        LL var;
        cin>>var;
        v.insert(var);
    }
    int val=1;
    for(int i=0;i<n;i++){
        val++;
        if(s[i]=='A'){
            if(!v.count(val))v.insert(val);
        }else{
            while(v.count(val))val++;
            v.insert(val);
        }
        if(s[i]=='B'){
            while(v.count(val))val++;
        }
    }
    cout<<v.size()<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;

}
 
 return 0; }