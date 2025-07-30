#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
int l=s.size();
bool f=true;
for(int i=0;i<l;i++){
    // cout<<s[i]<<" ";
    if(s[i]!='1'&&s[i]!='4'){
        // cout<<s[i]<<" ";
     f=false;
    //  break;
    }
}
if(s[0]=='4')f=false;
if(s.find("444")!=s.npos)f=false;
if(f){
    cout<<"YES";
}else cout<<"NO";
 return 0;
}