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
        vector<int>v(n),ans;
        for(int i=0;i<n ;i++){
            cin>>v[i];
        }
        int r=v[0];
        int e=v[0];
        for(int i=1;i<n;i++){
            if(abs(v[i-1]%2)!=abs(v[i]%2)){
                e=max(v[i],e+v[i]);
            }else{
                e=v[i];
            }
            r=max(r,e);
        }
        cout<<r<<endl;
        }
 return 0; }