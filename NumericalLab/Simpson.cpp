#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
double f(double x){
    return x*x;
}

void one_third(){
            double a,b,h;cin>>a>>b>>h;
    // cout<<a<<b<<h;
    double n=(b-a)/h;
    // cout<<n<<endl;
    vector<double>y(n+1);
    double x=0,i=0;
    while(x<=b){
        y[i]=f(x);
        i++;
        x+=h;
    }
    for(int i=0;i<=n;i++){
        cout<<y[i]<<" ";
    }cout<<endl;
    double first=0,second=0,third=0;
    first=y[0]+y[n];
    for(int i=1;i<=n-1;i+=2){
        second+=y[i];
    }
       for(int i=2;i<=n-2;i+=2){
        third+=y[i];
    }
    cout<<(h/3)*(first+4*second+2*third)<<endl;

}

void three_8(){
        double a,b,h;cin>>a>>b>>h;
        double n=(b-a)/h;
    vector<double>y(n+1);
    double x=0,i=0;
    while(x<=b){
        y[i]=f(x);
        i++;
        x+=h;
    }
    for(int i=0;i<=n;i++){
        cout<<y[i]<<" ";
    }cout<<endl;
    double first=0,second=0,third=0;
      first=y[0]+y[n];
    for(int i=1;i<=n-1;i++){
        if(i%3==0)continue;
        second+=y[i];
    }
           for(int i=3;i<=n-3;i+=3){
        third+=y[i];
    }
        cout<<(3*h/8)*(first+3*second+2*third)<<endl;
}
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    // one_third();
    three_8();



 return 0; }