#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define loop(i,a,b) for(int i=a;i<b;i++)
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
set<char>ch;
for(int i=0;i<s.size();i++){
    ch.insert(s[i]);
}
if(ch.count('H')||ch.count('Q')||ch.count('9')){
    cout<<"YES";

}else cout<<"NO";
 
 return 0;
}