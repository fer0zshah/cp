#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    map<string,int>mp,m;
    vector<string>s;
    vector<int>v;
    for(int i=0;i<n;i++){
        string x;int y;
        cin>>x>>y;
        mp[x]+=y;
        s.push_back(x);
        v.push_back(y);
    }

    int mx=0;
    for(auto it:mp){
        // cout<<it.first<<"->"<<it.second<<endl;
        if(it.second>mx){
            mx=it.second;
        }
    }
    // cout<<mx;
    string ans;
    for(int i=0;i<n;i++){
        m[s[i]]+=v[i];
        ans=s[i];
        if(m[s[i]]>=mx&&mp[s[i]]==mx){
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}