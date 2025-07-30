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
    int n,s;
    cin>>n>>s;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(s<v[0]){
        cout<<(v[n-1]-s)<<endl;
    }else if(s>v[n-1])cout<<(s-v[0])<<endl;
    else{
    int ans1=(s-v[0])+(v[n-1]-v[0]);
    int ans2=(v[n-1]-s)+(v[n-1]-v[0]);
    cout<<min(ans1,ans2)<<endl;
    }
    }

 
 return 0;
}