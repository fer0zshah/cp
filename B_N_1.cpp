#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n,m;
cin>>n>>m;
set<int>s;
int sum=0;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    s.insert(x);
    sum+=x;
}
 int rem=sum-m;
 if(s.count(rem))cout<<"Yes"<<endl;
 else cout<<"No"<<endl;
 return 0; }