#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 int n;
 cin>>n;
 if(n==0){
    cout<<0;
    return 0;
 }
 vector<int>v(12);
 for(int i=0;i<12;i++){
    cin>>v[i];
 }
 sort(v.begin(),v.end(),greater<int>());
 int sum=0;
 bool f=false;
 int i=0;
for(;i<12;i++){
    sum+=v[i];
    if(sum>=n){
        f=true;
        break;
    }
}
if(f){
    cout<<i+1<<endl;
}else{
    cout<<-1<<endl;
}
 return 0;
}