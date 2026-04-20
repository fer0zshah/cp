#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 int t;
 cin>>t;
 while(t--){
    int n,k;
    cin>>n>>k;
    vector<LL>v(n);
    int odd=0,even=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0) even++;
        else odd++;
    }
    int f=0;
    for(int i=1;i<=min(k,odd);i+=2){
        int en=k-i;
        if(en<=even){
            f=1;
            break;
        }
    }
    if(f)cout<<"Yes\n";
    else cout<<"No\n";

 }
 return 0; }