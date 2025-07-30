#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a,b,c;
cin>>a>>b>>c;
int x=a*b*c;
int y=a+b*c;
int z=a*b+c;
// int d=a*c+b;
int e=(a+b)*c;
// int f=(a+c)*b;
int g=(c+b)*a;
int h=a+b+c;

int maxx=max({x,y,z,e,g,h});
cout<<maxx<<endl;

 
 return 0;
}