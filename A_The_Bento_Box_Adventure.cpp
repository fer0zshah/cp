#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int s=0;
for(int i=1;i<6;i++){
    s=s+i;
}
int a,b,c,d;
cin>>a>>b>>c>>d;
cout<<s-(a+b+c+d);
 
 return 0;
}