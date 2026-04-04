#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while (t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ca=0,cb=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a')ca++;
        else cb++;
    }
    if(cb==n||ca==n){
        cout<<-1<<endl;
        continue;
    }
    int mx=0;
    set<int>ss;
    if(ca>cb){
        int cm=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a')cm++;
            else{
                // mx=max(mx,cm);
                ss.insert(cm);
                cm=0;
            }
        }
        ss.insert(cm);
        if(ss.count(ca-cb))cout<<ca-cb<<endl;
        else cout<<-1<<endl;
    }else{
            int cm=0;
        for(int i=0;i<n;i++){
            if(s[i]=='b')cm++;
            else{
                // mx=max(mx,cm);
                ss.insert(cm);
                cm=0;
            }
        }
        ss.insert(cm);
        if(ss.count(cb-ca))cout<<cb-ca<<endl;
        else cout<<-1<<endl;

    }
}


 
 return 0; }