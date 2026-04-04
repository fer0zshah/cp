#include<bits/stdc++.h>
using namespace std;
typedef long long LL;


 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    LL mx=1e6;
    vector<bool>p(mx+1,true);
    p[0]=p[1]=false;
    for(int i=2;i*i<mx+1;i++){
        if(p[i]){
            for(int j=i*i;j<mx+1;j+=i){
                p[j]=false;
            }
        }
    }

    int n;
    cin>>n;
    while(n--){
        LL x;
        cin>>x;
        LL r=round(sqrt(x));
        if(r*r==x&&p[r]){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }

 
 return 0; }