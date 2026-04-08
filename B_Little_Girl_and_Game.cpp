#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
string s;
cin>>s;
map<char,int>mp;
for(int i=0;i<s.size();i++)mp[s[i]]++;

int e=0;
for(auto it:mp)if(it.second%2==0)e++;
if(e==mp.size()){
    cout<<"First"<<endl;
    return 0;
}
int o=mp.size()-e;
if(o%2)cout<<"First"<<endl;
else cout<<"Second"<<endl;
 return 0; }