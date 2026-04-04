#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 int n,d;cin>>n>>d;int m=d+1;
 vector<double>x(n),y(n),sumpow(2*m-1),propow(m),sol(m);
 for(int i=0;i<n;i++)cin>>x[i];
 for(int i=0;i<n;i++)cin>>y[i];
for(int i=0;i<2*m-1;i++){
    double s=0;
    for(int j=0;j<n;j++){
        s+=pow(x[j],i);
    }
    sumpow[i]=s;
}
for(int i=0;i<m;i++){
    double s=0;
    for(int j=0;j<n;j++){
        s+=pow(x[j],i)*y[j];
    }
    propow[i]=s;
}
vector<vector<double>>v(m,vector<double>(m+1));
for(int i=0;i<m;i++){
    int k=i;
    for(int j=0;j<m;j++){
        v[i][j]=sumpow[k];
        k++;
    }
    v[i][m]=propow[i];
}

for(int i=0;i<m-1;i++){
    for(int j=i+1;j<m;j++){
        double r=v[j][i]/v[i][i];
        for(int k=0;k<=m;k++){
            v[j][k]-=r*v[i][k];
        }
    }
}
for(int i=m-1;i>=0;i--){
    sol[i]=v[i][m];
    for(int j=0;j<m;j++){
        if(i!=j)
        sol[i]-=v[i][j]*sol[j];
    }
    sol[i]/=v[i][i];
}

for(int i=0;i<m;i++)cout<<sol[i]<<" ";

 return 0; }