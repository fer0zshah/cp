#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n;
cin>>n;
map<string ,int>v;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    if(v[s]++){
        cout<<s<<v[s]-1<<endl;
    }else{
        cout<<"OK"<<endl;
    }
}
 return 0; }