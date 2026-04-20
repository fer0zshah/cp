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
        for(int i=0;i<n;i++)cin>>v[i];
        LL mx=v[0];
        LL s=0;
        for(int i=1;i<n;i++){
            if(v[i]*v[i-1]<0){
                s+=mx;
                mx=v[i];
            }else{
                mx=max(mx,v[i]);
            }
        }
            s+=mx;
            cout<<s<<endl;
    }
 return 0; }