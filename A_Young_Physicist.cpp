#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int a[n][3];
for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
        cin>>a[i][j];
    }
}

vector<int>v;
for(int i=0;i<3;i++){
    int sum=0;
    for(int j=0;j<n;j++){
        sum+=a[j][i];
        //  cout<<a[j][i]<<" "; 
    }
    
    //  cout<<sum<<" ";   
    if(sum==0){
        v.push_back(0);
    }
    else{
        v.push_back(1);
    }
}
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
bool flag=true;
for(int i=0;i<v.size();i++){
    if(v[i]==1)flag=false;
    // else flag=false;
}
if(flag)cout<<"YES"<<endl;
else cout<<"NO"<<endl;


 
 return 0;
}