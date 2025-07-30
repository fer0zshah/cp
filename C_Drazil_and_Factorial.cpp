#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 int n;
 cin>>n;
 LL a;
 cin>>a;
 string s;
 for(int i=0;i<n;i++){
    int d=a%10;
    // cout<<d<<" ";
    a/=10;
    if(d==2){
        s.push_back('2');
    }else if(d==3){
        s.push_back('3');
    }else if(d==4){
        s+="322";
    }else if(d==5){
        s.push_back('5');
    }else if(d==6){
        s+="53";
    }else if(d==7){
        s.push_back('7');
    }else if(d==8){
        s+="7222";
    }else if(d==9){
        s+="7332";
    }
    // cout<<s<<endl;
 }
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    cout<<s<<endl;

 return 0;
}