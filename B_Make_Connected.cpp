#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t=1 ;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<vector<char>>v(n,vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int f=0;
    for(int i=0;i<n-2;i++){
        for(int j=0;j<n-2;j++){
           if(v[i][j]=='#'&&v[i][j+2]=='#'&&v[i+2][j+1]=='#'){
                f=1;break;
           }else if(v[i][j]=='.'&&v[i][j+2]=='.'&&v[i][j+1]=='#'&&v[i+1][j+1]=='.'){
                f=1;break;
           }else if(v[i][j]=='.'&&v[i+1][j-1]=='.'&&v[i+1][j+1]=='.'&&v[i][j+1]=='#'&&v[i][j-1]=='#')
            f=1;break;
        }if(f)break;
    }
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(v[i][j]=='#')
            c++;
        }
        if(c>=3){
            f=1;break;
        }
    }
        for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(v[j][i]=='#')
            c++;
        }
        if(c>=3){
            f=1;
            break;
        }
    }
    if(f)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
 
 return 0; }