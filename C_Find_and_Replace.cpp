#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
bool isConsistent(vector<pair<char,int>>&p){
    map<char,int>m;
    for(auto it:p){
        char l=it.first;
        int v=it.second;
        if(m.count(l)){
            if(m[l]!=v){
                return false;
            }
        }else{
            m[l]=v;
        }
    }
    return true;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<pair<char,int>>p(n);
    for(int i=0;i<n;i++){
        if(i%2==0)
        p[i]={s[i],0};
        else 
        p[i]={s[i],1};
    }
    // for(auto it:p){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    if(isConsistent(p)){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
}
 
 return 0;
}