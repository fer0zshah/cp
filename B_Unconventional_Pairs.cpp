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
        sort(v.begin(),v.end());
        LL mx=0;
        for(int i=0;i<n-1;i++){
            if((v[i+1]-v[i])>mx){
                mx=(v[i+1]-v[i]);
            }
            i++;
        }
        cout<<mx<<endl;
    }
 return 0; }