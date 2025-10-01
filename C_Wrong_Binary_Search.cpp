#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int f=0;
    if(s[0]=='0'&&s[1]=='1')f=1;
    else if(s[n-1]=='0'&&s[n-2]=='1')f=1;
    else{
        for(int i=1;i<n-1;i++){
            if(s[i]=='0'){
                if(s[i-1]=='1'&&s[i+1]=='1')f=1;
            }
        }    }
    if(f){
        cout<<"NO"<<endl;
       
    }else{
        cout<<"YES"<<endl;
        vector<int>v(n,0);
        int track=1;
      
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                v[i]=i+1;
                if(i-1>=0&&v[i-1]==0) v[i-1]=track;
                track=i+2;
            }
        }
        if(v[n-1]==0)
        v[n-1]=track;
    for(int i=0;i<n;i++){
        if(v[i]==0)v[i]=i+2;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" " ;
    }cout<<endl;
    }


}
 
 return 0; }