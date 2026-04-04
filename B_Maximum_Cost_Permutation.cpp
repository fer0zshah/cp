#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    int n;
    cin>>n;
    
    vector<int>v(n);
    int z=0,ind,sum=0,c=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        if(v[i]==0){
            c++;ind=i;
        }
    }
    // if(n==1){
    //     cout<<0<<endl;
    //     continue;
    // }
    int mis=(n*n+n)/2-sum;
    int i,j;
    for(i=0;i<n;i++){
        if(v[i]!=i+1)break;
    }
    for(j=n-1;j>=0;j--){
        if(v[j]!=j+1)break;
    }
    if(j<0)j=0;
    if(i>=n)i=n-1;
    if(c==1){
       if(ind>i&&ind<j)cout<<j-i+1<<endl;
       else{
            int fw;
            if(ind==i&&mis==i+1){
                for(fw=i+1;fw<=j;fw++){
                    if(v[fw]!=fw+1)break;
                }
                if(fw!=j)cout<<j-fw+1<<endl;
                else cout<<0<<endl;
            }else if(ind==j&&mis==j+1){
                for(fw=j-1;fw>=i;fw--){
                    if(v[fw]!=fw+1)break;
                }
                if(fw!=i)cout<<fw-i+1<<endl;
                else cout<<0<<endl;
            }else cout<<j-i+1<<endl;
       } 
    }else{
       if(j==0)cout<<0<<endl;
       else cout<<j-i+1<<endl;
    }

}
 
 return 0; }