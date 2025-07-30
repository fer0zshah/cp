#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
if(m>n){
    cout<<-1<<endl;
    return 0;
}
int mini=n/2;
int r=n%2;
mini+=r;
while(mini%m!=0){
    mini++;

}
cout<<mini<<endl;
 
 return 0;
}