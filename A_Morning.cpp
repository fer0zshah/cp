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
    int t=0;
    char cc='1';
    for(int i=0;i<4;i++){
        if(s[i]=='0')s[i]=char(48+10);
        t=t+abs(cc-s[i]);
        t++;
        cc=s[i];
    }
    cout<<t<<endl;

}
 
 return 0;
}