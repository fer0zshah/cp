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
    vector<int>v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    map<int,int>freq;
    int f=0;
    for(int i=0;i<m;i++){
        freq[v[i]]++;
        if(freq[v[i]]>1){
            f=1;break;
        }else if(i<m-1&&v[i]>v[i+1]){
            f=1;break;
        }
    }
    if(f){
        cout<<1<<endl;
    }else{
        sort(v.begin(),v.end());
        cout<<n-v[m-1]+1<<endl;
    }
}
 
 return 0; }