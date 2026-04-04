#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// while(true){
int n;
cin>>n;
vector<vector<double>>A(n,vector<double>(n+1));
vector<vector<double>>L(n,vector<double>(n,0));
vector<vector<double>>U(n,vector<double>(n,0));
for(int i=0;i<n;i++){
    for(int j=0;j<n+1;j++){
        cin>>A[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int k=i;k<n;k++){
        double sum=0;
        for(int j=0;j<i;j++){
            sum+=(L[i][j]*U[j][k]);
        }
        U[i][k]=A[i][k]-sum;
    }

       for(int k=i;k<n;k++){
        if(i==k)L[i][i]=1;
        else{
            double sum=0;
          for(int j=0;j<i;j++){
            sum+=(L[k][j]*U[j][i]);
          }
          L[k][i]=(A[k][i]-sum)/U[i][i];
        }
        
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<setw(6)<<L[i][j];
    }cout<<endl;
}
cout<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<setw(6)<<U[i][j];
    }cout<<endl;
}
cout<<endl;
    vector<double>y(n),x(n);
    for(int i=0;i<n;i++){
        double s=0;
        for(int j=0;j<i;j++){
            s+=(y[j]*L[i][j]);
        }
        y[i]=A[i][n]-s;
    }

    for(int i=0;i<n;i++){
   cout<<y[i]<<" ";
}cout<<endl;

        int c=0;
        for(int i=0;i<n;i++){
            int f=1;
            for(int j=0;j<n;j++){
                if(U[i][j]!=0)f=0;
            }
            if(!f)c++;
        }
        int cc=0;
        for(int i=0;i<n;i++){
            int f=1;
            for(int j=0;j<n;j++){
                if(U[i][j]!=0)f=0;
            }
            if(y[i]!=0)f=0;
            if(!f)cc++;
        }

        if(cc==c){
            if(c==n){
                cout<<"Unique sol"<<endl;
            }else{
                cout<<"Many sol"<<endl;
                return 0;
            }
        }else {
            cout<<"no sol"<<endl;
            return 0;
        }

        for(int i=n-1;i>=0;i--){
        double ss=0;
        for(int j=i+1;j<n;j++){
            ss+=(x[j]*U[i][j]);
        }
        x[i]=(y[i]-ss)/U[i][i];
    }
    
    for(int i=0;i<n;i++){
   cout<<x[i]<<" ";
}cout<<endl;
//  string ys="yes";
//  string s;
//  cin>>s;
//  if(s!=ys)break;
// }
 return 0; }