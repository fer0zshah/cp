#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    // int l=s.size();
    if((n-k)==1){
        cout<<"YES"<<endl;
        continue;
    }
    sort(s.begin(),s.end());
    vector<pair<char,char>>p;
    for(int i=0;i<n-1;){
        if(s[i]==s[i+1]){
            p.push_back({s[i],s[i+1]});
            i=i+2;
        }else{
            i++;
        }
     
    }
    int len=p.size();
    // cout<<2*len<<endl;
    if(2*len>=(n-k-1)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
 
 return 0;
}