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
char a[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>a[i][j];
    }
}
int r=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(a[i][j]=='?'){
           r=i;
       
        }
    }
}
// cout<<r<<" ";
bool A=false;
bool B=false;
bool C=false;
// for(int i=r;i>=r;i++){
    for(int j=0;j<3;j++){
      if(a[r][j]=='A')A=true;
      else if(a[r][j]=='B')B=true;
      else if(a[r][j]=='C')C=true;
        }
        // i--;
// }
    if(!A)cout<<'A'<<endl;
    else if(!B)cout<<'B'<<endl;
    else if(!C)cout<<'C'<<endl;
}

 
 return 0;
}