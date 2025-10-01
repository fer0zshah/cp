#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t ;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>ps(n);
    ps[0]=v[0];
    for(int i=1;i<n;i++){
        ps[i]=p[i-1]+v[i];
    }
    vector<int>z;
    for(int i=0;i<n;i++){
        if(v[i]%3==0){
            z.push_back(i);
        }
    }
}
 
 return 0; }