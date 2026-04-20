#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 int n;
 cin>>n;
 vector<double>v(n);
 for(int i=0;i<n;i++)cin>>v[i];
 double d=0.5;
 int c=0;
 for(int i=0;i<n;i++){
    if(d<=v[i]){
        c++;
        d=v[i]-d;
    }else{
        d-=v[i];
    }
 }
 cout<<c<<endl;

 return 0; }