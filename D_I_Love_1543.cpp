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
    int n,m;
    cin>>n>>m;

    string s;
    // vector<string>x;
    char v[n][m];
    // string s;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin>>v[i][j];
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++) cout<<v[i][j];
    //     cout<<"\n";
    // }
    int mn=min(m,n);
    string str="1543";
    int j,k,l,r,c=0;
    for(int i=0;i<mn/2;i++){
        for( j=i;j<m-i;j++){
            // cout<<v[i][j]<<" ";
            s.push_back(v[i][j]);
        }j--;
        for( k=i+1;k<n-i;k++){
            // cout<<v[k][j]<<" ";
            s.push_back(v[k][j]);
        }k--;
        for( l=j-1;l>=i;l--){
            // cout<<v[k][l]<<" ";
            s.push_back(v[k][l]);
        }l++;
        for( r=k-1;r>i;r--){
            // cout<<v[r][l]<<" ";
            s.push_back(v[r][l]);
        }
        s.push_back(s[0]);
          s.push_back(s[1]);
            s.push_back(s[2]);
            // cout<<s<<endl;
             for (size_t pos = 0; (pos = s.find(str, pos)) != string::npos; ++pos) {
                c++;
            } 
            s.clear();   
    }
           cout<<c<<endl;
    
 
}
 
 return 0;
}