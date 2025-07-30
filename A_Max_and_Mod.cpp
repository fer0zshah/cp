#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n%2){
        cout<<n<<" ";
        for(int i=1;i<n;i++){
            cout<<i<<" ";
        }cout<<endl;
    }else{
        cout<<-1<<endl;
    }
}
 
 return 0;
}