#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    n-=2;
    vector<char>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool flag=true;
    for(int i=0;i<n-2;i++){

      if(v[i]=='1' && v[i+1]=='0' && v[i+2]=='1'){
                flag=false;
                // cout<<"wtf ";
                break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
} 
 return 0;
}