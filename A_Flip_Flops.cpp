#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    LL n,c,k;
    cin>>n>>c>>k;
    vector<LL>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }


    sort(v.begin(),v.end());
    if(v[0]>c){
        cout<<c<<endl;
        continue;
    }
        for(int i=0;i<n;i++){
            if(v[i]<=c){
            LL ff = min(k, c - v[i]);
            k -= ff;   
            c += (v[i] + ff);
            }
            else break;
        }
        cout<<c<<endl;

}
 
 return 0; }