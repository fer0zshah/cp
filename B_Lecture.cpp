#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
map<string,string>v;
string s1,s2;
for(int i=0;i<m;i++){
    cin>>s1>>s2;
    v.insert({s1,s2});
}
// for(auto it:v){
//     cout<<it.first<<" "<<it.second<<endl;
// }
cin.ignore();
string nw;
getline(cin,nw);
string ans;
stringstream ss(nw);
string var;
while(ss>>var){
    if(v.count(var)){
        if(v[var].size()<var.size()){
            ans+=v[var]+" ";
        }else ans+=var+" ";
    }
}
ans.pop_back();
cout<<ans;
 
 return 0;
}