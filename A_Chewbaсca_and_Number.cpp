#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string x;
cin>>x;
int l=x.size();
for(int i=0;i<l;i++){
    if(x[i]=='9'&&i==0){
   
    }else if(x[i]>'4'){
        // x[i]=x[i]-'0';
        x[i] = ('9' - x[i] + '0');
        // cout<<x[i]<<" ";
    }
}
cout<<x;
 
 return 0;
}