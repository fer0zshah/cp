#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
        set<int>s;
    for(int i=0;i<n;i++){
        cin>>v[i];
        s.insert(v[i]);
    }
    int l=s.size();
    while(!s.count(l)){
        s.insert(l);
        l=s.size();
    }
    cout<<s.size()<<endl;
}
 
 return 0; }