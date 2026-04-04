#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    LL n,m;
    cin>>n>>m;
cout<<(n%m)*(n/m+1)*(n/m)/2+(m-n%m)*(n/m)*(n/m-1)/2<<" "<< (n-m+1)*(n-m)/2<<endl;
 
 return 0; }