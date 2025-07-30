#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
bool f=false;
if(s[0]>='a'&&s[0]<='z'){
    f=true;
    
}
bool flag=false;
for(int i=1;i<s.size();i++){
    if(s[i]>='a'){
        flag=true;
    }
}
if(flag){
    cout<<s;
}else{
    if(f){
    s[0]=s[0]-32;   
    }else{
        s[0]=s[0]+32;
    }
    for(int i=1;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
    cout<<s;
}

 return 0;
}