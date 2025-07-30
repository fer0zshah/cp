#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<LL>a(n+1);
        a[0]=0;
        for(int i=1;i<n+1;i++){
            cin>>a[i];
        }
        vector<LL>v(n+1,0);
        for(int i=n;i>=1;i--){
            if(i==n){
                v[i]=a[i];
            }
            else if((i+a[i])>n)v[i]=a[i];
            else{
                v[i]=a[i]+v[i+a[i]];
            }
        }
        cout<<*max_element(v.begin(),v.end())<<endl;
    }
 
 return 0;
}