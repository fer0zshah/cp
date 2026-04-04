#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
cout<<"Enter no of equation: ";
int n;
cin>>n;
vector<vector<double>>v(n,vector<double>(n,0));
vector<vector<double>>L(n,vector<double>(n,0));
vector<vector<double>>U(n,vector<double>(n,0));
vector<double>B(n),Y(n,0),X(n,0);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>v[i][j];
    }
    cin>>B[i];
}

for(int i=0;i<n;i++){
    for(int k=i;k<n;k++){
        double sum=0;
        for(int j=0;j<i;j++){
            sum+=L[i][j]*U[j][k];
        }
        U[i][k]=v[i][k]-sum;
    }

    for(int k=i;k<n;k++){
        if(k==i)L[i][i]=1;
        else{
            double sum=0;
            for(int j=0;j<i;j++){
                sum+=L[k][j]*U[j][i];
            }
            L[k][i]=(v[k][i]-sum)/U[i][i];
        }
    }
}
cout<<"\n L: "<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<setw(10)<<L[i][j];
    }cout<<endl;
}

cout<<"U: "<<endl;

 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<setw(8)<<U[i][j];
    }cout<<endl;
}
// Y[0]=B[0];
for(int i=0;i<n;i++ ){
    double s=0;
    for(int j=0;j<i;j++){
        s+=L[i][j]*Y[j];
    }
    Y[i]=B[i]-s;
}
for(int i=0;i<n;i++){
    cout<<Y[i]<<" ";
}cout<<endl;

for(int i=n-1;i>=0;i--){
    double s=0;
    for(int j=0;j<n;j++){
        if(i!=j){
            s+=U[i][j]*X[j];
        }
    }
    X[i]=(Y[i]-s)/U[i][i];
}
for(int i=0;i<n;i++){
    cout<<X[i]<<" ";
}cout<<endl;

 return 0; }