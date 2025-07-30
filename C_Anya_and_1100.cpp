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
    string s;
    cin>>s;
    int l=s.size();
    set<int>ss;
    for(int i=0;i<l-3;i++){
        if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='0'&&s[i+3]=='0'){
            ss.insert(i);
        }
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int m;
        cin>>m;
        char n;
        cin>>n;
        if(s[m-1]!=n){
            s[m-1]=n;
            for(int i=max(0,m-4);i<=min(l-4,m-1);i++){
                if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='0'&&s[i+3]=='0'){
                    ss.insert(i);
                }else{
                    ss.erase(i);
                }
            }
        }
        int len=ss.size();
        if(len>0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
}
 
 return 0;
}