#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 string s;
 cin>>s;
 string ans;
 int len=s.size();
 for(int i=0;i<len;i++){
    if(s[i]=='O'){
        ans.push_back('.');
        ans.push_back('-');
        ans.push_back('.');
        ans.push_back('-');
    }else if(s[i]=='K'){
        ans.push_back('.');
        ans.push_back('-');
        
    }
 }
 cout<<ans;
 return 0;
}