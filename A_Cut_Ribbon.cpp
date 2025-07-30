
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>v(3);
for(int i=0;i<3;i++)
{
    cin>>v[i];
}
sort(v.begin(),v.end());
int l=3;
int sum=0;
int c=0;

   
        for(int i=0;i<3;i++){
            if(sum<n){
                c++;
                sum+=v[i];
                if(i==2)i=0;
            }else {
                // flag =true;
                break;
            } 
        }
        cout<<c<<endl;
        int i=2,s=0;
        if(n%v[i]==0){
            int j=0;
            if(n%v[j]==0){
                s+=n/v[i];
                n%=v[i];
                j++;
                if(n%v[j]){
                    s+=n/v[i];
                    n%=v[i];
                    j++;
                }if(n%v[i]){
                    s+=n/v[i];
                }
                // i--;  
            }
           
        }
        cout<<"1:"<<s<<endl;
        if(n%v[i]==0){
            s+=n/v[i];
            n%=v[i];
            i--;
        } cout<<"2:"<<s<<endl;
        
            if(n%v[i]==0){
                s+=n/v[i];  
            }
        cout<<"3:"<<s<<endl;
        int mx=max({c,s});
        cout<<mx<<endl;


 
 return 0;
}