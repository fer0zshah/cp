#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
LL count=0;
while(t--){
    LL n;
    cin>>n;
    count=0;
    if(n<15){
        if(n<3){
            cout<<n+1<<endl;
            continue;
        }
        while(n--){
            if(n%3==n%5){
                count++;
            }
        }
        cout<<count<<endl;
    }else{
        count=3;
        
        // while(d<=n){
        //     d+=15;
        //     count+=3;
        // }
        count+=n/15+2*(n/15);
        if(n%15==1){
            count-=1;
        }else if(n%15==0)count-=2;
        cout<<count<<endl;
    }
   
}
 
 return 0;
}