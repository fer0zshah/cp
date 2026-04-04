#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    int n;cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
     int aa=0,bb=0;
      for(int i=0;i<n;i++){
        if(a[i]==1)aa++;
        if(b[i]==1)bb++;
    }
    // cout<<aa<< "  "<<bb<<endl;
    for(int i=0;i<n; i++){
        if(i%2){
            if(a[i]!=b[i]){
                if((a[i]==1&&b[i]==0)&&bb%2==0){
                    a[i]=0;b[i]=1;bb++;aa--;
                }
                else if ((a[i]==0&&b[i]==1)&&bb%2==0){
                    a[i]=1;b[i]=0;bb--;aa++;
                }
            }
        }else{
               if(a[i]!=b[i]){
                if((a[i]==0&&b[i]==1)&&aa%2==0){
                    a[i]=1;b[i]=0;aa++;bb--;
                }
                else if((a[i]==1&&b[i]==0)&&aa%2==0){
                    a[i]=0;b[i]=1;aa--;bb++;
                }
            }
        }
    }
    //  cout<<aa<< "  "<<bb<<endl;
    //  for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl;
    //  for(int i=0;i<n;i++)cout<<b[i]<<" ";cout<<endl;
    //  aa=0,bb=0;
    // for(int i=0;i<n;i++){
    //     if(a[i]==1)aa++;
    //     if(b[i]==1)bb++;
    // }
    if(aa%2!=bb%2){
        if(aa%2)cout<<"Ajisai"<<endl;
        else if(bb%2)cout<<"Mai"<<endl;
    }else cout<<"Tie"<<endl;

}
 
 return 0; }

