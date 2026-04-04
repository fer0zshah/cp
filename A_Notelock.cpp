#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int c=0,trac=0;
    int i;
    for(i=0;i<n;i++){
        if(s[i]=='1'){
            c++;
            trac=i;
            break;
        }
    }

    while(i<n){
        i++;
        if(s[i]=='1'){
            // cout<<i<<"->"<<trac<<endl; 
            if((i-trac)>(k-1)){
                c++;
            }
            trac=i;
        }
    }
    cout<<c<<endl;


}
 
 return 0; }