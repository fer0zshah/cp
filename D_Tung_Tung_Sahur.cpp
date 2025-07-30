#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t=1;
cin>>t;
while(t--){
    string p,s;
    cin>>p>>s;
    int l=p.size();
    int n=s.size();
    int i=0,j=0,f=0;
    while(i<l&&j<n){
        int c1=0;
        char x=p[i];
        while(i<l&&p[i]==x){
            c1++;
            i++;
        }
        // cout<<"c1: "<<c1<<endl;
        int c2=0;
        char y=p[j];
        while(j<n&&s[j]==x){
            c2++;
            j++;
        }
        //  cout<<"c2: "<<c2<<endl;
       if(c2<c1 || c2>c1*2){
            f=1;
            break;
       }
    }
    if(i!=l||j!=n)f=1;
    if(!f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 return 0;
}