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
    map<int,int>mp;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
//    cout<<"key -1 "<<mp[-1]<<endl;
//    cout<<"key 0 "<<mp[0]<<endl;
    if(mp[-1]%2)cout<<mp[0]+2<<endl;
    else cout<<mp[0]<<endl;
}
 
 return 0; }