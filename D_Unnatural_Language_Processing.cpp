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
    LL n;
    cin>>n;
    string s;
    cin>>s;
    set<char>c={'b','c','d'};
    set<char>v={'a','e'};

   if(n<=3){
    cout<<s<<"\n";
    continue;
   }
   string ans;
  
     for(LL i=n-1;i>=0;){
        if(n>3&&c.count(s[i])&&v.count(s[i-1])&&c.count(s[i-2])){
        //    auto it= s.insert(s.begin()+i,'.');
             ans.push_back(s[i]);
             ans.push_back(s[i-1]);
             ans.push_back(s[i-2]);
             ans.push_back('.');

            // s.insert(i-2,".");
            i-=3;
        }
        else if(n>2&&v.count(s[i])&&c.count(s[i-1])){
            // auto it=s.insert(s.begin()+i,'.');
            // s.insert(i-1,".");
            ans.push_back(s[i]);
            ans.push_back(s[i-1]);
            ans.push_back('.');
            
            i-=2;
        }
      
    }
    ans.pop_back();
    reverse(ans.begin(),ans.end());
    // s.pop_back();
    // reverse(s.begin(),s.end());
    cout<<ans<<"\n";
}
 
 return 0;
}