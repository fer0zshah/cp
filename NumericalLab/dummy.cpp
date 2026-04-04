#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

double ff(double x){
    return (x-3.332)*(x+5.32332);
}
// class Implementation{
//     double x1,x2;

// }
void bisection(double x1,double x2){
    double E=0.01;
    double x0=(x1+x2)/2;
    double px0=x0;
    do{
        px0=x0;
        if(ff(x0)==0){
            cout<<x0<<endl;
            return ;
        }
        if(ff(x1)*ff(x0))x2=x0;
        else if(ff(x2)*ff(x0))x1=x0;
        x0=(x1+x2)/2;
    }while(abs(px0-x0)>E);
    cout<<x0<<endl;
}
void falsi(double x1,double x2){
    double E=0.01,x0=x1-ff(x1)*(x2-x1)/(ff(x1)+ff(x2));
    double px0=x0;
    do{
        px0=x0;
        if(ff(x0)==0){
            cout<<x0<<endl;
            return ;
        }
        if(ff(x1)*ff(x0)<0)x2=x0;
        else if(ff(x2)*ff(x0)<0)x1=x0;
        x0=x1-ff(x1)*(x2-x1)/(ff(x1)+ff(x2));
    }while(abs(px0-x0)>E);
}
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    double x1=-10,x2=-9;
    vector<pair<int,int>>v;
    for(int i=-10;i<10;i++){
        double f=ff(x1)*ff(x2);
        if(f<0)v.push_back({x1,x2});
        x1++;
        x2++;
    }
    int solno=v.size();
    for(int i=0;i<solno;i++){
        cout<<"bi: ";
        bisection(v[i].first,v[i].second);
        cout<<endl;
        cout<<"falsi:";
        bisection(v[i].first,v[i].second);
    }
 
 return 0; }