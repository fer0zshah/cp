#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 LL n;
 cin>>n;
//  vector<int>v(n);
//   vector<int>s(n-1);
//    vector<int>t(n-2);
   LL sum1=0,sum2=0,sum3=0;
   for(int i=0;i<n;i++){
        LL v;
        cin>>v;
        sum1+=v;
   }
     for(LL i=0;i<n-1;i++){
        LL s;
        cin>>s;
        sum2+=s;
   }
     for(LL i=0;i<n-2;i++){
        LL t;
        cin>>t;
        sum3+=t;
   }
   cout<<sum1-sum2<<endl;
   cout<<sum2-sum3<<endl;
 return 0;
}