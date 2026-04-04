#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while (t--)
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int idx=find(v.begin(),v.end(),n)-v.begin();
    swap(v[idx],v[0]);
    for(int i=0;i<n;i++)cout<<v[i]<<" ";cout<<endl;

}
 return 0; }