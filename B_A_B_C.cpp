#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
int count=0;
int len=s.size();
// for(int i=1;i<len-1;i++){
//     if(s[i]!='B'){
//         continue;
//     }
//     for(int j=0;j<len;j++){
//         if(s[j]!='A'){
//             continue;
//         }
//         int k=2*i-j;
//         if(s[k]=='C'&&k<len){
//             count++;
//         }
//     }   
// }
for(int i=0;i<len;i++){
    for(int j=i+1;j<len;j++){
        for(int k=j+1;k<len;k++){
            if(s[i]=='A'&&s[j]=='B'&&s[k]=='C'&&2*j==i+k){
                count++;
            }
        }

    }
}
cout<<count;

 return 0;
}