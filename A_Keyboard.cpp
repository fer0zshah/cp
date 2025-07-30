#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s="qwertyuiopasdfghjkl;zxcvbnm,./";
char c;
cin>>c;
string in;
cin>>in;
for(int i=0;i<in.size();i++){
    int pos=s.find(in[i]);
    // cout<<pos<<" ";
    if(c=='R')in[i]=s[pos-1];
    else in[i]=s[pos+1];
}

cout<<in; 
 return 0;
}