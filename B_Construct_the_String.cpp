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
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    for(int i=0;i<n;i++){
        s.push_back('a'+char(i%b));
    }
    cout<<s<<endl;
}
 return 0;
}