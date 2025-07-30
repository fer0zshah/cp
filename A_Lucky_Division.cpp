#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>v={4,7,44,47,74,77,444,474,447,744,747,774,477,777};
int len=v.size();
bool flag=false;
for(int i=0;i<len;i++){
    if(n%v[i]==0){
        flag=true;
    }
}
if(flag){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
 
 return 0;
}