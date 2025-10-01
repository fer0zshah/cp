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
    vector<int>b(n);
    vector<vector<int>>v(n+1);
    vector<int>freq(n+1,0);
    for(int i=0;i<n;i++){
        cin>>b[i];
        freq[b[i]]++;
        v[b[i]].push_back(i);
    }
    int x=0;
    bool f=0;
    vector<int>ans(n);
    for(int i=1;i<=n;i++){
        if(freq[i]==0)continue;
        if(freq[i]%i){
            cout<<-1<<endl;
            f=1;break;
        }
        for(int j=0;j<freq[i];j++){
            if(j%i==0)x++;
            ans[v[i][j]]=x;
        }
    }
    if(!f){
        for(int i=0;i<n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }

}
 
 return 0; }