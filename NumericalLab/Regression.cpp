#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

vector<vector<double>> Polynomial(int m ,int n,vector<double>&x,vector<double>&y){
   
    vector<double>sumpow(2*m-1);
    for(int i=0;i<=2*m-2;i++){
        double sum=0;
        for(int j=0;j<n;j++){
            sum+=pow(x[j],i);
        }
        sumpow[i]=sum;
    }
    
    vector<double>propow(m);
    for(int i=0;i<m;i++){
        double sum=0;
        for(int j=0;j<n;j++){
            sum+=(pow(x[j],i))*y[j];
            
        }
        propow[i]=sum;
    }
    
    // for(int i=0;i<m;i++)cout<<propow[i]<<" ";
    // cout<<endl;
    vector<vector<double>>A(m,vector<double>(m+1));
    for(int i=0;i<m;i++){
        int k=i;
        for(int j=0;j<m;j++){
            A[i][j]=sumpow[k];
            k++;
        }
        A[i][m]=propow[i];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<=m;j++){
            cout<<A[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;
    return A;
}
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n ;cin>>n;
    vector<double>x(n),y(n);
    for(int i=0;i<n;i++)cin>>x[i];
    for(int i=0;i<n;i++)cin>>y[i];
     int d;cin>>d;int m=d+1;
   vector<vector<double>>v= Polynomial(m,n,x,y);
 

   cout<<endl;
   for(int i=0;i<m-1;i++){
        for(int j=i+1;j<m;j++){
            double r=v[j][i]/v[i][i];
            for(int k=0;k<=m;k++){
                v[j][k]-=r*v[i][k];
            }
        }
    for(int i=0;i<m;i++){
    for(int j=0;j<m+1;j++){
        cout<<setw(6)<<v[i][j]<<" ";
    }cout<<endl;
   }cout<<endl;
   }

   for(int i=0;i<m;i++){
    for(int j=0;j<m+1;j++){
        cout<<setw(6)<<v[i][j]<<" ";
    }cout<<endl;
   }

   vector<double>sol(m);
   for(int i=m-1;i>=0;i--){
        sol[i]=v[i][m];
        for(int j=0;j<m;j++){
            if(i!=j)
            sol[i]-=v[i][j]*sol[j];
        }
        sol[i]/=v[i][i];
   }

   for(int i=0;i<m;i++)cout<<sol[i]<<" ";cout<<endl;
   cout<<"y=";
   for(int i=0;i<m;i++)cout<<" +"<<sol[i]<<"x^"<<i; 

 return 0; }