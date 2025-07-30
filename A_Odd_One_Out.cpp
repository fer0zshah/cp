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
    int a,b,c;
    cin>>a>>b>>c;
    bool fab=false;
    bool fbc=false;
    bool fca=false;
    if(a==b){
        fab=true;
    }else if(b==c){
        fbc=true;
    }else if(a==c){
        fca=true;
    }

    if(fab){
        cout<<(a+b+c)-2*a<<endl;
    }
    else if(fbc){
        cout<<(a+b+c)-2*b<<endl;
    }else if(fca){
        cout<<(a+b+c)-2*c<<endl;
    }
}

 
 return 0;
}