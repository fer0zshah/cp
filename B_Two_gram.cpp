#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 int n;
 cin>>n;
 string s;
 cin>>s;

 vector<string>v;
for(int i=0;i<n-1;i++){
    v.push_back(s.substr(i,2));
}
int l=v.size();

 map<string,int>mp;
 for(int i=0;i<l;i++){
    mp[v[i]]++;
 }
 int mx=INT_MIN;
 string k;
 for(auto it:mp){
    if(it.second>mx){
        mx=it.second;
        k=it.first;
    }
 }
 cout<<k<<endl;

 return 0;
}