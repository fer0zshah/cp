#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
vector<vector<double>> get(vector<vector<double>>A,int r,int c){
    int n=A.size();
    vector<vector<double>>co;
    for(int i=0;i<n;i++){
        if(i==r)continue;
        vector<double>ans;
        for(int j=0;j<n;j++){
            if(j==c)continue;
            ans.push_back(A[i][j]);
        }
        co.push_back(ans);
    }
    return co;
}
double Det(vector<vector<double>>A){
    int n=A.size();
    if(n==1)return A[0][0];
    if(n==2)return (A[0][0]*A[1][1]-A[1][0]*A[0][1]);
    double det=0,s=1;
    for(int i=0;i<n;i++){

        det+=s*(Det(get(A,0,i)));
        s*=-1;
    }
    return det;
}
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n;
cin>>n;
vector<vector<double>>A(n,vector<double>(n,0)),cof(n,vector<double>(n)),adj(n,vector<double>(n));
vector<double>B(n);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>A[i][j];
    }
    cin>>B[i];
}
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<A[i][j]<<" ";
//     }cout<<endl;
   
// }
// for(int i=0;i<n;i++){
//     cout<<B[i]<<" ";
// }
double det=Det(A);
cout<<det<<endl;
int s=1;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if((i+j)%2)s=-1;
        else s=1;
        cof[i][j]=s*Det(get(A,i,j))/det;
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<cof[i][j]<<" ";
    }cout<<endl;
   
}
cout<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        adj[i][j]=cof[j][i];
    }
   
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<adj[i][j]<<" ";
    }cout<<endl;
   
}

vector<double>ans(n);
for(int i=0;i<n;i++){
    double s=0;
    for(int j=0;j<n;j++){
        s+=adj[i][j]*B[j];
    }
    ans[i]=s;
}
cout<<"ans: 
for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}
 
 return 0; }