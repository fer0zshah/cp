#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define loop(i,a,b) for(int i=a;i<b;i++)
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s,x="xxx";
cout<<x[8]<<"\n"; 
cin>>s;
int len=s.size();
string r;
for(int i=0;i<len;i++){
    if(s[i+2]=='B'&&s[i+1]=='U'&&s[i]=='W'){
       if(r.size()  && r.back()!=' '){
        r.push_back(' ');
       }
        i+=2;
    }else{
       r.push_back(s[i]);
    }
}
 cout<<r;
//  bool tog=true;
//  for(int i=0;i<r.size();i++){
//     if(r[i]==' ' && tog){
        
//     }else{
//         tog=false;cout<<r[i]; 
//         if(r[i]==' ')tog=true;
//     }
//  }
 return 0;
}