#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n;
cin>>n;
string s;
cin>>s;
int idx=0;
for(int i=0;i<n;i++){
    if(s[i]!='o'){
        idx=i;break;
    }
    if(i==n-1)idx=i+1;
}
for(int i=idx;i<n;i++)cout<<s[i];

 
 return 0; }