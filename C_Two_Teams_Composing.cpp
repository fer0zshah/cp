#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;

    vector<int>v(n);
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        cin>>v[i];
        freq[v[i]]++;
    }
    
    int mx=0;

    for(auto it:freq){
        // cout<<it.first<<"->"<<it.second<<endl;
        mx=max({mx,it.second});
    }
    int u=freq.size();
    if(u==mx){
        cout<<mx-1<<endl;
    }else{
        cout<<min(u,mx)<<endl;
    }
    // cout<<mx<<endl;



}
 
 return 0;
}