#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
string s;
cin>>s;
int n=s.size();
int fab=0,fba=0,la=n-1,lb=n-1;
int i;
for( i=1;i<n;i++){
    if(s[i]=='B'&&s[i-1]=='A'){
        fab=1;
        break;
    }

}
for(int j=i+1;j<n-1;j++){
    if(s[j]=='B'&&s[j+1]=='A'){
        fba=1;
        break;
    }
}
if(fab&&fba){
    cout<<"YES"<<endl;
    return 0;
}
fab=0,fba=0;
for( i=1;i<n;i++){
    if(s[i]=='A'&&s[i-1]=='B'){
        fab=1;
        break;
    }

}
for(int j=i+1;j<n-1;j++){
    if(s[j]=='A'&&s[j+1]=='B'){
        fba=1;
        break;
    }
}
if(fab&&fba){
    cout<<"YES"<<endl;
}else cout<<"NO"<<endl;

    return 0;
}