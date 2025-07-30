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
        if(n<2020){
            cout<<"NO"<<endl;
            continue;
        }
        int sum=0;
        int i=0;
        while(sum<n){
           sum+=2020;
        //    cout<<sum<<" ";
           i++;
           if((sum+2020)>n){
            break;
           }
           
        }
        int d=n-sum;
       
        if(d>i){
            cout<<"NO"<<endl;
        }else cout<<"YES"<<endl;
    }
 return 0;
}