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
        vector<LL>v(n),idx(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=1;i<n;i++){
            if(v[i-1]==v[i])idx[i]=idx[i-1];
            else idx[i]=i;
        }
        // for(int i=0;i<n;i++)cout<<idx[i]<<" ";
        // cout<<endl;
        int q;
        cin>>q;
        while(q--){
            int l,r;
            cin>>l>>r;
            int x=upper_bound(idx.begin(),idx.end(),idx[l-1])-idx.begin()+1;
            // cout<<x<<endl;
            if(x<=r)cout<<l<<" "<<x<<endl;
            else cout<<"-1 -1"<<endl;
    }
    cout<<endl;
}
 
 return 0; }