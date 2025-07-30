#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define loop(i,a,b) for(int i=a;i<b;i++)
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
cin>>s;
s.pop_back();
s.pop_back();
s.push_back('i');
cout<<s<<endl;

}
 
 return 0;
}