#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 int n;
 cin>>n;
 vector<int>u(n);
 for(int i=0;i<n;i++){
    cin>>u[i];
 }
 int m;
 cin>>m;
 vector<int>v(m);
 for(int i=0;i<m;i++){
    cin>>v[i];
 }
 sort(u.begin(),u.end());
 sort(v.begin(),v.end());
 int x=0;
 int c=0;
//    for(int i=0;i<n;i++){
//     cout<<u[i]<<" ";
//  }cout<<endl;
//  for(int i=0;i<m;i++){
//     cout<<v[i]<<" ";
//  }cout<<endl;
 for(int i=0;i<n;i++){
    for(int j=x;j<m;j++){
        if(abs(u[i]-v[j])<=1){
            c++;
            j++;
            x=j;
            break;
        }
    }
 }
 cout<<c<<"\n";


 return 0;
}