#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    vector<int>inx;
    vector<int>ex,nx;
    for(int i=0;i<n;i++){
        if(s[i]<t[i]){
            inx.push_back(i);
        }else if(s[i]==t[i]){
            ex.push_back(i);
        }
    }
    int sum=0;
    int l=inx.size();
    for(int i=0;i<ex.size();i++){
        int it=upper_bound(inx.begin(),inx.end(),ex[i])-inx.begin();
        if(it<l)
        sum+=(n-inx[it]);
    }
    // cout<<sum<<endl;
    // for(int i=ex[0];i<)
    for(int i=0;i<inx.size();i++)cout<<inx[i]<<" ";cout<<endl;
    for(int i=0;i<ex.size();i++)cout<<ex[i]<<" ";cout<<endl;
    // for(int i=0;i<nx.size();i++)cout<<nx[i]<<" ";cout<<endl;
 
    for(int i=0;i<l;i++){
        sum+=(n-inx[i]);
    }
    cout<<sum<<endl;
 
 return 0; }