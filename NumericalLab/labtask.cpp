#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
pair<double ,double> trans(vector<double>&x,vector<double>&y){
    int n=x.size();
    for(int i=0;i<n;i++){
        x[i]=exp(x[i]/4);
    }
    double SoX=0;
    for(int i=0;i<n;i++)SoX+=x[i];
    double SoY=0;
    for(int i=0;i<n;i++)SoY+=y[i];
    double pos=SoX*SoY;
    double sop=0;
    for(int i=0;i<n;i++)sop+=(x[i]*y[i]);
    double sxs=0;
    for(int i=0;i<n;i++)sxs+=(x[i]*x[i]);
    double b=(n*sop-pos)/(n*sxs-SoX*SoX);
    double a= SoY/n-b*(SoX)/n;
    return {a,b};
}
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n;
cin>>n;
vector<double>x(n),y(n);
for(int i=0;i<n;i++)cin>>x[i];
for(int i=0;i<n;i++)cin>>y[i];

pair<double,double> p=trans(x,y);

double  z;cin>>z;

 cout<<p.first+p.second*exp(z/4)<<endl;
 return 0; }