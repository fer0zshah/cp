#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
string str;
cin>>str;
stack<int>s;
s.push(str[0]);
for(int i=1;i<n;i++){
    if(((s.empty())||str[i]==s.top())){
        s.push(str[i]);
    }else{
        s.pop();
    }
    
}
cout<<s.size();
 
 return 0;
}