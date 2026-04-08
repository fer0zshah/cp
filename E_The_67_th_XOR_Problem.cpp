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
    vector<LL>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    LL mx =-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            mx=max(mx,v[i]^v[j]);
        }
    }
    cout<<mx<<endl;
}
 
 return 0; }