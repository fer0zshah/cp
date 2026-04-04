#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
string s;
cin>>s;
int skip=s.size()/2;
for(int i=0;i<s.size();i++){
    if(i==skip)continue;
    cout<<s[i];
}
 
 return 0; }