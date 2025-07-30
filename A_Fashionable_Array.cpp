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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int i=0;
    for(;i<n/2;i++){
        // cout<<v[0]%2<<" "<<v[n-i-1]%2<<endl;
       
              if(v[0]%2==v[n-i-1]%2){
            break;
        }
    }int j=0;
    for(;j<n;j++){
        if(v[j]%2==v[n-1]%2){
            break;        }
    }
    cout<<min(i,j)<<endl;
 }
 return 0;
}