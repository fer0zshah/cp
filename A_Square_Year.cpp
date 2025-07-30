#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int m=sqrt(n);
    if(m*m==n){
        cout<<m/2<<" "<<m-m/2<<endl;
    }else cout<<-1<<endl;
}
 
 return 0;
}