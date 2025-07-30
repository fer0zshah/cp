#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define loop(i,a,b) for(int i=a;i<b;i++)
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    LL n;
    cin>>n;
    int c2=0;
    while(n%2==0){
        n/=2;c2++;
    } 
    // cout<<n<<endl;
    int c3=0;
    while(n%3==0){
        n/=3;
        c3++;
    }
    // cout<<n<<endl;
    if(n!=1){
        cout<<-1<<endl;
        continue;
    }else{
        if(c2<=c3){
            cout<<c3+(c3-c2)<<endl;
        }else{ cout<<-1<<endl;}

    }

  
 }
 
 return 0;
}