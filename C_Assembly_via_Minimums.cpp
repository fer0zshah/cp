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
    LL m=n*(n-1)/2;
    vector<LL>v(m),ans;
    map<LL,int>mp;
    for(int i=0;i<m;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    // sort(v.begin(),v.end());
    int c=1;
    for(auto it:mp){
  
        if(it.second==n-c){
        ans.push_back(it.first);
        c++;
        }
        else{
            int temp=0;
            while (temp < it.second) {
                ans.push_back(it.first);
                temp+=n-c;
                c++;
            }  
        }
    }

    for(int i=0;i<n-1;i++)cout<<ans[i]<<" ";
    cout<<ans[n-2]<<endl;

}
 
 return 0; }