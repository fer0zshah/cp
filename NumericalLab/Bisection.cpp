#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
double ff(double x){
    return  (x-5.943);
}
 
void Bisection(double x1,double x2){
    double E=0.01;
    double x0=(x1+x2)/2;
    double px0=x0;
    do{
         px0=x0;
        if(ff(x0)==0){
            cout<<x0<<endl;
            return ; 
        }
         if(ff(x0)*ff(x1)<0){
            x2=x0;
        }else if(ff(x0)*ff(x2)<0) x1=x0;
        x0=(x1+x2)/2;
    }while (abs(px0-x0)>E);
   
    cout<<x0<<endl;

}
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    double f=1,x1=-10,x2=-9;
    vector<pair<double,double>>v;
    for(int i=-10;i<10;i++){
        f=ff(x1)*ff(x2);
        if(f<0)v.push_back({x1,x2});
        x1++;
        x2++;
    }
    int solno=v.size();
    for(int i=0;i<solno;i++){
        Bisection(v[i].first,v[i].second);
    }
 
 return 0; }