#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
string s;
cin >> s;
for(int i=0;i<s.size();i++){
    if((s[i]-'0')%8==0){
        cout<<"YES\n"<<s[i]<<endl;
        return 0;
    }   
}
for(int i=0;i<s.size();i++){
    for(int j=i+1;j<s.size();j++){
        int num=(s[i]-'0')*10+(s[j]-'0');
        if(num%8==0){
            cout<<"YES\n"<<num<<endl;
            return 0;
        }   
    }
}

for(int i=0;i<s.size();i++){
    for(int j=i+1;j<s.size();j++){
        for(int k=j+1;k<s.size();k++){
            int num=(s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
            if(num%8==0){
                cout<<"YES\n"<<num<<endl;
                return 0;
            }   
        }
    }
}
cout<<"NO\n";
    return 0;
}