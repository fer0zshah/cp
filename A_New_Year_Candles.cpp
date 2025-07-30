#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,k;
cin>>n>>k;
int N=n;
int s=0;
while(n>=k){
    s=s+n/k; 
    n=(n/k)+(n%k);
    // cout<<n<<endl;
}
cout<<s+N<<endl;
 
 return 0;
}