#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        set<int>s;
        int c=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            s.insert(v[i]);
            if(v[i]==k)c++;
        }
        int cc=0;
        for(int i=0;i<k;i++){
            if(!s.count(i))cc++;
        }
        if(cc>c)c=c+(cc-c);
        cout<<c<<endl;

    }
 
 return 0; }