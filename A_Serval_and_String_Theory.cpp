#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
// cin>>t;
while(t--){
    int l,k;
    cin>>l>>k;
    string s;
    cin>>s;
    string r=s;
    if(k>l){
        k=l;
    }
    sort(s.begin(),s.end());
    // cout<<s<<endl;
    for(int i=0;i<l;i++){
        if(s[i]==r[i]){
            k++;
        }else{
            break;
        }
    }
    string sp,rp,ans;
    
     if(k>0&&k<l){
    sp=s.substr(0,k);
    cout<<sp<<endl;
        rp=r.substr(k);
        cout<<rp<<endl;
        

     ans=sp+rp;
    //  cout<<ans<<endl;
    }else{
        if(k==0){
            ans=r;
        }else if(k==l){
            ans=s;
        }
        
        // cout<<ans<<endl;
    }
    // cout<<"beforerev:"<<r<<endl;
    // if(k!=0){
        reverse(r.begin(),r.end());
   
    // cout<<"after:"<<r<<endl;
    // cout<<ans<<endl;
    if(ans<r){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    
}
 
 return 0;
}