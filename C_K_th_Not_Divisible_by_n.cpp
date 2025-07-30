#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){  //1,2,3,5,6,7,9,10,11,13,14,15,17,18
                //4,8,12,16
                
    LL n,k;
    cin>>n>>k;
    bool f=false;
    if(k%(n-1)==0){
        f=true;
    }
    LL r=(k/(n-1));
    // if(r%n==0)r--;
    if(f)r--;
    cout<<k+r<<endl;
 
}
 
 return 0;
}