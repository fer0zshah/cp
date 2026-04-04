#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
// vector<vector<string>>ans;
vector<string>b(n,s);
vector<int>l(n,0);
vector<int>low(2*n-1,0),up(2*n-1,0);
vector<string>ans;
void solve(int col,vector<string>&b,vector<int>&l,vector<int>&low,vector<int>&up){
    if(col==n){
        ans=b;
        return ;
    }
    for(int row=0;row<n;row++){
        if(!l[row]&&!low[row+col]&&!up[n-1+col-row]){
            b[row][col]='Q';
            l[row]=1;low[row+col]=1;up[n-1+col-row]=1;
            solve(col+1,b,l,low,up);
            l[row]=0;low[row+col]=0;up[n-1+col-row]=0;
              b[row][col]='.';
        }
    }
}
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int k,n=8;
string s(n,'.');
vector<string>b(n,s);
vector<int>l(n,0);
vector<int>low(2*n-1,0),up(2*n-1,0);
cin>>k;
for(int i=0;i<k;i++){
    int x,y;
    cin>>x>>y;
    b[x][y]='Q';
    l[x]=1;
    low[x+y]=1;
    up[n-1+y-x]=1;

}
solve(0,b,l,low,up);
b=ans;
for(int i=0;i<n;i++)cout<<b[i]<<endl;
 
return 0; }