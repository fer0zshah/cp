#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
long long n,k;
cin>>n>>k;
int c=1;
while((k&1)==0){
    k>>=1;
    c++;
}
 cout<<c<<endl;
 return 0; }