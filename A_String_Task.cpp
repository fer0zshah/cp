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
 for(int i=0;i<len;i++){
    s[i]=tolower(s[i]);
 }
 set<char>c={'A','U','O','I','E','Y','a','u','o','i','e','y'};
 
 queue<char>q;
 for(int i=0;i<len;i++){
     if(!c.count(s[i])){
        q.push('.');
        q.push(s[i]);
    }
 }
 int ss=q.size();
 for(int i=0;i<ss;i++){
    char ch=q.front();
    q.pop();
    cout<<ch;
 }
 return 0;
}