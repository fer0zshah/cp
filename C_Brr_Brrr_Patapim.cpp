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
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    vector<int>p(2*n,0);
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            p[i+j+1]=arr[i][j];
        }
     }
     int sum=0;
     for(int i=0;i<2*n;i++){
        sum+=p[i];
     }
     n*=2;
     int s=(n*n+n)/2;
     p[0]=s-sum;
      for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
     }cout<<endl;
}
 
 return 0;
}