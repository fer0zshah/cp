#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define loop(i,a,b) for(int i=a;i<b;i++)
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
LL n;
cin>>n;
vector<int>v;
if(n>0){
    cout<<n;
    return 0;
}else{
    int r1=n%10;
    n/=10;
    // cout<<n<<endl;
    v.push_back(n);
    int r2=n%10;
    n/=10;
    n*=10;
    v.push_back(n+r1);
}
// for(int i=0;i<2;i++){
//     cout<<v[i]<<" ";
// }cout<<endl;
int m=*max_element(v.begin(),v.end());
cout<<m;
 
 return 0;
}