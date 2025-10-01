#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    LL k,x;
    cin>>k>>x;
    LL p=1;
    LL c=x;
    for(int i=0;i<k+1;i++){
        p*=2;
    }
    vector<LL>vv;
    LL v=p-x;
    LL l=c,r=v;
    int cc=0;
    while(l!=r){
        if(r>l){
            r=r-l;
            l*=2;
            vv.push_back(1);
        }else{
            l=l-r;
            r*=2;
            vv.push_back(2);
        }
        cc++;
    }
    cout<<cc<<endl;

    for(int i=cc-1;i>=0;i--)cout<<vv[i]<<" ";
    cout<<endl;
}
 
 return 0; }