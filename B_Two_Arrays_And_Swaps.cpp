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
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<int>());
    for(int i=0;i<k;i++){
       if(a[i]<b[i]){
        swap(a[i],b[i]);
       }
    }
    LL sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<sum<<endl;
}
 
 return 0;
}