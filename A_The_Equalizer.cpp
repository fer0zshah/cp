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
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int f=-1;
    for(int i=0;i<n;i++){
        if(v[i]%2)f=-f;
    }
    if(f==1){cout<<"YES"<<endl;continue;}
    int ff=1;
    for(int i=0;i<n;i++){
        if(k%2)ff=-ff;
    }
    if(ff==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
 
 return 0; }