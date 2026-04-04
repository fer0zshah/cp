#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<vector<char>>v(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    vector<vector<char>>ans(n,vector<char>(m,'.'));
  for(int i = 0; i < m; i++) {
            int c = 0, l = n - 1;
            for(int j = n - 1; j >= 0; j--) {
                if(v[j][i] == '*') c++;
                else if(v[j][i] == 'o') {
                    ans[j][i] = 'o';
                    while(c--) ans[l--][i] = '*';
                    c = 0;
                    l = j - 1;
                }
            }
            while(c--) ans[l--][i] = '*';
        }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j];
        }cout<<endl;
    }cout<<endl;

}
 
 return 0; }