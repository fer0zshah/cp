#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    int T=t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        vector<int>v(2*n);
        for(int i=0;i<2*n-1;i++){
            v[i]=1;
        }
        v[2*n-1]=b;
        cout<<"Case #"<<T-t<<": ";
         for(int i=0;i<2*n;i++){
           cout<<v[i]<<" ";  
        }cout<<endl;
    }
 
 return 0; }