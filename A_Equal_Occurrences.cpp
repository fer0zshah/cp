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
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int l=mp.size();
    vector<int>vv;
    for(auto it:mp){
        vv.push_back(it.second);
    }
    sort(vv.begin(),vv.end(),greater<int>());
    int max=0;
    for(int i=0;i<l;i++){
        int c=0;
        for(int j=0;j<l;j++){
            if(vv[j]>=vv[i])c++;
        }
        if(vv[i]*c>max){
            max=c*vv[i];
        }
    }
    cout<<max<<endl;

 }
 return 0; }