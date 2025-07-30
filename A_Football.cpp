#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 int n;
 cin>>n;
 vector<string>v(n);
 map<string,int>m;
 for(int i=0;i<n;i++){
    cin>>v[i];
 }
 for(int i=0;i<n;i++){
    m[v[i]]++;
 }
//  for(auto i:m){
//     cout<<i.first<<" "<<i.second<<endl;;
//  }
 int mx=INT_MIN;
 string mxk;
 for(auto i:m){
    if(i.second > mx){
        mx=i.second;
        mxk=i.first;
    }
 }
 cout<<mxk<<endl;
 return 0;
}