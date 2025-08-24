#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int l;
cin>>l;
string s;
cin>>s;


string temp;
string x="tea";

for(int i=l-1;i>l-4;i--){
    temp.push_back(s[i]);
}
reverse(temp.begin(),temp.end());
if(temp==x)cout<<"Yes";
else cout<<"No";
 
 return 0; }