#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
int l=s.size();
vector<int>ss;
for(int i=0;i<l-1;i++){
    if(s[i]==s[i+1])ss.push_back(i+1);
}
// for(auto it:ss)cout<<it<<" ";
sort(ss.begin(),ss.end());
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    auto it=lower_bound(ss.begin(),ss.end(),x);
    auto up=lower_bound(ss.begin(),ss.end(),y);

    int c=up-it;
    cout<<c<<endl;

}
 
 return 0;
}