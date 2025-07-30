#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
int len=s.size();
string h="hello";
string ans;
int c=0;
for(int i=0;i<len;i++){
    if(s[i]==h[c]){
        ans.push_back(s[i]);
        c++;
    }
}
if(h==ans)cout<<"YES";
else cout<<"NO";

 
 return 0;
}