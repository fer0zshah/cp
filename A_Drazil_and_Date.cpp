#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 LL a,b,s;
 cin>>a>>b>>s;
//  cout<<(s-(2*min(a,b)+abs(a-b)))<<endl;
 a=abs(a);b=abs(b);
 if(s>=(2*min(a,b)+abs(a-b))&&(s-(2*min(a,b)+abs(a-b)))%2==0)cout<<"Yes";
 else cout<<"No";
 return 0;
}