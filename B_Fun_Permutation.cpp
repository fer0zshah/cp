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
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>V=v;
    sort(V.begin(),V.end());
    // for(int i=0;i<n;i++){
    //     cout<<V[i]<<" "; 
    // }cout<<endl;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        ans[i]=V[n-1]+1-v[i];
    }
     for(int i=0;i<n;i++){
        cout<<ans[i]<<" "; 
    }cout<<endl;

}
 
 return 0; }