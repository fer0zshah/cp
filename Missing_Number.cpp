#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
LL n;
cin>>n;
LL sum=0;
for(int i=0;i<n-1;i++){
    LL x;
    cin>>x;
    sum+=x;
}
LL exp=n*(n+1)/2;
cout<<exp-sum;
 
 return 0; }