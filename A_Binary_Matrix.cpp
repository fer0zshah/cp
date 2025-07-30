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
    int m,n;
    cin>>m>>n;
    vector<string>v;
    for(int i=0;i<m;i++){
       string s;
       cin>>s;
       v.push_back(s);
    }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<v[i][j]<<" ";
    //     }cout<<endl;
    // }
    int r=0,c=0,one=0;

     for(int i=0;i<m;i++){
        one=0;
       for(int j=0;j<n;j++){
            // cout<<v[i][j]<<" ";
            if(v[i][j]=='1')one++;
       }
    //    cout<<one<<endl;
       if(one%2)r++;
    }
    for(int i=0;i<n;i++){
        one=0;
       for(int j=0;j<m;j++){
            if(v[j][i]=='1')one++;
       }
       if(one%2)c++;
    }
    // cout<<r<<" "<<c<<endl;
    int mx=max(r,c);
    cout<<mx<<endl;
    

}
 
 return 0;
}