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
    string s ;
    cin>>s;
    int l=s.size();
    int cz=0,co=0;
    for(int i=0;i<l;i++){
        if(s[i]=='0')cz++;
        else co++;
    }
    // cout<<co<<" "<<cz<<endl;
   int mn=min(co,cz);
   if(mn%2==0){
    cout<<"NET"<<endl;
   }else{
    cout<<"DA"<<endl;
   }

}
 
 return 0;
}