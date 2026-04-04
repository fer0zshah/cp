#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n;cin>>n;
vector<double>x(n);
vector<vector<double>>y(n,vector<double>(n,0));
for(int i=0;i<n;i++){
    cin>>x[i];
}
for(int i=0;i<n;i++){
    cin>>y[i][0];
}
// for(int i=0;i<n;i++){
// cout<<x[i]<< " ";
// }cout<<endl;

// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<y[i][j]<<" ";
//     }
//     cout<<endl;
// }
for(int i=1;i<n;i++){
    for(int j=0;j<n-i;j++){
        y[j][i]=(y[j+1][i-1]-y[j][i-1])/(x[i+j]-x[j]);
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
       cout<<setw(6)<<y[i][j]<<" ";
    }cout<<endl;
}cout<<endl;

double p=1;
int v;cin>>v;
double ans=0;
ans=y[0][0];
for(int i=1;i<n;i++){
    p*=(v-x[i-1]);
ans+=(p*y[0][i]);
}
cout<<ans<<endl;
 
 return 0; }