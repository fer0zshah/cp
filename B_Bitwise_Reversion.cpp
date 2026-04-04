#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    int f=1;
    while(x||y||z){
        int o=0;
        if(x%2)o++;
        if(y%2)o++;
        if(z%2)o++;
        x/=2;
        y/=2;
        z/=2;
        if(o==2){
            f=0;
            break;
        }
    }
    if(f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 
 return 0; }