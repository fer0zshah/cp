#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int l=s.size();
    int v=0;
    bool f=false;
    for(int i=0;i<l-1;i++){
        if(s[i]=='('){
            v++;
        }else{
            v--;
        }
        if(v==0){
            f=true;
            break;
        }

    }
    if(f)cout<<"YES\n";
    else cout<<"NO\n";
}
 return 0;
}