#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define loop(i,a,b) for(int i=a;i<b;i++)
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int len=s.size();
    bool flag=false;
    for(int i=0;i<len-1;i++){
        if(s[i]==s[i+1]){
            flag=true;
        }
    }
    if(flag){
        cout<<1<<endl;
    }else{
        cout<<len<<endl;
    }
}
 
 return 0;
}