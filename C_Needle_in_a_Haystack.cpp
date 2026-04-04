#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    string  s,t;
    cin>>s>>t;
    set<char>ch;
    for(int i=0;i<t.size();i++){
        ch.insert(t[i]);
    }
        int f=0;
     for(int i=0;i<s.size();i++){
        if(!ch.count(s[i])){
            f=1;
            break;
        }
    }
    if(f)cout<<"Impossible"<<endl;
    else{
        int j=0;
        sort(t.begin(),t.end());
         for(int i=0;i<t;i++){
           if(s[j]==t[i]){

           }
        }
    }
}
 
 return 0; }