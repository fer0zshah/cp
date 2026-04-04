#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int aa=a;
    if(a==b){
        cout<<0<<endl;;
        continue;
    }
    vector<int>v;
    int c=0;
    while(aa){
        aa/=2;
        c++;
    } 
    int mx=1<<c;
    aa=a;
     c=0;
    vector<int>ans;
    if(b<mx){
        while(aa){
        if((aa%2==b%2)){
        }else{
            int one=1<<c;
            if(one<=a){
            a=a^one;
            ans.push_back(one);
            }
        }
        aa/=2;b/=2;
        c++;
    }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }else cout<<-1<<endl;
   

}
 
 return 0; }