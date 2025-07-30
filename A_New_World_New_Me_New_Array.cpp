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
    int n,k,p;
    cin>>n>>k>>p;
    k=abs(k);
    
        int r=k%p;
        int m=k/p;
        if(k%p==0){
            
            if(m<=n){
                cout<<m<<endl;
            }else cout<<-1<<endl;

        }else{
            m++;
            if(m<=n){
                cout<<m<<endl;
            }else cout<<-1<<endl;
        }
        
   
        
    }

    

}
 
