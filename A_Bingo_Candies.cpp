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
    vector<vector<int>>v(n,vector<int>(n));
    map<int,int>freq;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
            freq[v[i][j]]++;
        }
    }
    int mx=0;
    for(auto it:freq){
        if(it.second>mx)mx=it.second;
    }
    if(mx>n*n-n)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
 
 return 0; }