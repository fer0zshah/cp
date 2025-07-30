#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
char t;
cin>>t;
// cout<<t<<endl;
int T=int(t)-48;
string s;
if(T>=10){
    if(n=1){
        cout<<-1<<endl;
    }else{
        for(int i=0;i<n-1;i++){
            s.push_back('1');
        }
        s.push_back('0');
    }

}else{
    for(int i=0;i<n;i++){
        // char ch=char(t);
        s.push_back(t);
    }

}
cout<<s<<endl;
 
 return 0;
}