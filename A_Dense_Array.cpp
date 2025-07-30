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
    vector<double>v(n);
    int c=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
        if(v[i]>2*v[i+1]){
            c+=(ceil(log2(v[i]/v[i+1]))-1);
            // cout<<c<<endl;
        }
    }
     for(int i=0;i<n-1;i++){
        if(2*v[i]<v[i+1]){
            c+=(ceil(log2(v[i+1]/v[i]))-1);
            // cout<<v[i]<<endl;  
        }
    }
 
    cout<<c<<endl;
}
 
 return 0;
}