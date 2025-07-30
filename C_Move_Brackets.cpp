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
    int n;cin>>n;
    string s;
    cin>>s;
    stack<char>ch;
    for(int i=0;i<n;i++){
        if(s[i]=='(')ch.push(s[i]);
        if(s[i]==')'){
            if(!ch.empty()){
                ch.pop();
            }
        }
    }
    int l=ch.size();
    cout<<l<<endl;

}
 
 return 0;
}