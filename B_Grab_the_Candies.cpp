#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    // vector<int>v(n);
    int os=0,es=0;
    for(int i=0;i<n;i++){
       int x;
       cin>>x;
       if(x%2)os+=x;
       else es+=x;
    }
    if(es>os)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
 
 return 0;
}