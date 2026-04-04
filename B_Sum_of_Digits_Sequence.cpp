#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int f(int n){
    int s=0;
    while(n){
    s+=n%10;
    n/=10;
    }
    return s;
}

 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n;
cin>>n;
int s=1;
for(int i=0;i<n-1;i++){
    s+=f(s);
}
cout<<s<<endl;

 return 0; }