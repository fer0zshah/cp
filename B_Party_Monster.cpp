#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
LL t;
cin>>t;
while (t--){
    LL n;
    cin>>n;
    string s;
    cin>>s;
    LL op=0,cl=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(')op++;
        else if(s[i]==')')cl++;
    }
    // cout<<op<<" "<<cl<<endl;
    if(op==cl) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
    return 0;
}