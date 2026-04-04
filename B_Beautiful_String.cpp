#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s[i]=='0')v.push_back(i+1);
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
}
 
 return 0; }