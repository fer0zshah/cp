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
int a,b,c,d;
cin>>a>>b>>c>>d;

int mxa=max({a,b});
int mna=min({a,b});
int mxb=max({c,d});
int mnb=min({c,d});
if(mxa>mxb&&mna>=mxb){
  cout<<4<<endl;
}else if(mxa==mxb&&mxa>mnb){
  cout<<4<<endl;
}else if(mxa>=mxb&&mna<mxb&&mna>=mnb){
   cout<<2<<endl;
}else if(mxa>mxb&&mna<mnb){
  cout<<0<<endl;
}else if(mxa<mxb){
  cout<<0<<endl;
}else{
  cout<<0<<endl;
}
// if(mxa>mxb&&mna>=mxb){
//     cout<<4<<endl;
// }else if(mxa>mxb&&mna<mxb&&mna>mnb){
//   cout<<2<<endl;
// }else if(mxa>mxb&&mna==mnb){
//   cout<<2<<endl;
// } else if(mxa>mxb&&mna<mnb){
//   cout<<0<<endl;
// }else{
//   cout<<0<<endl;
// }
//  cout<<g<<endl; 

}
 
 return 0;
}