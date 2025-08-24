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
  
        for(int i=0;i<n;i++){
            if(i%2)v[i]=3;
            else v[i]=-1;
        }
        if(n%2==0)v[n-1]=2;
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }cout<<endl;

    
}
 
 return 0; }