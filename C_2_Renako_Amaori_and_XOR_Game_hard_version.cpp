#include <bits/stdc++.h>
using namespace std;
typedef long long LL;


int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);
    
    int t=1;
    cin >> t;
    while(t--) {
       int n;cin>>n;
       vector<int>a(n),b(n);
       int aa=0,bb=0;
       for(int i=0;i<n;i++){
            cin>>a[i];
            aa^=a[i];
       }
       for(int i=0;i<n;i++){
        cin>>b[i];
        bb^=b[i];
       }
       if(aa==bb){
        cout<<"Tie"<<endl;continue;
       }
        int diff=aa^bb,msb=-1;
       for(int i=20;i>=0;i--){
            if((diff>>i)&1){
                msb=i;break;
            }
       }

       for(int i=n-1;i>=0;i--){
            int abt=(a[i]>>msb)&1;
            int bbt=(b[i]>>msb)&1;
            if(abt!=bbt){
                if(i%2)cout<<"Mai"<<endl;
                else cout<<"Ajisai"<<endl;
                break;
            }
       }
    }
    return 0;
}