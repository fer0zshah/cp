#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//  int t;
//  cin>>t;
//  while(t--){
    double n,m,a;
    cin>>n>>m>>a;
    if(a>=n&&a>=m){
        cout<<1<<endl;
        // cout<<1<<endl;

        
    }else{
      

        double val1=ceil(n/a);
        double val2=ceil(m/a);
        // cout<<LL(val1)<<endl;
        // cout<<LL(val2)<<endl;
        cout<<LL(val1*val2)<<endl;
    }

//  }
 return 0;
}