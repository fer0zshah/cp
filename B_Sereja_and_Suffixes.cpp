#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,l;
cin>>n>>l;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
set<int>s;
for(int i=n-1;i>=0;i--){
    s.insert(v[i]);
    v[i]=s.size();
}
for(int i=0;i<l;i++){
    int q;
    cin>>q;
    cout<<v[q-1]<<endl;
}
 return 0;
}