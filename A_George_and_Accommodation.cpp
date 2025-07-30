#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 int n,c=0;
 cin>>n;
 for(int i=0;i<n;i++){
    int p,q;
    cin>>p>>q;
    if((q-p)>=2)c++;
 }
 cout<<c;
 return 0;
}