#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    map<int,int>mp;
    int j=0;
    vector<int>u(m+1,-1);
    while(j<n){
        int l;
        cin>>l;
        for(int i=0;i<l;i++){
            int x;
            cin>>x;
           mp[x]++;
           if(mp[x]==1)u[x]=j;
           else u[x]=-1;
        }
        j++;
    }
    int f=1;
    for(int i=1;i<=m;i++){
        if(mp[i]==0)f=0;
    }
    set<int>s;
    for(int i=0;i<m+1;i++){
        s.insert(u[i]);
    }
    int c=s.size()-1;
    if((n-c)>=2&&f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 
 return 0; }