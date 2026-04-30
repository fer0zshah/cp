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
        mp[v[i]]=i+1;
    }
    int mx=0;
    int f=0;
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=1000;j++){
            if(__gcd(i,j)==1&&mp[i]>0&&mp[j]>0){
                mx=max(mx,mp[i]+mp[j]);
                f=1;
            }
        }
    }

    if(f)cout<<mx<<endl;
    else cout<<-1<<endl;
}
 
 return 0; }