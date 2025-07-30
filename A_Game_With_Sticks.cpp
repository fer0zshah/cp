#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define loop(i,a,b) for(int i=a;i<b;i++)
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
int p=n*m;
int count=0;
while(p!=0){
    n--;m--;
    p=p-(n+m+1);
    count++;
}
if(count%2!=0) cout<<"Akshat"<<endl;
else cout<<"Malvika"<<endl;
 
 return 0;
}