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
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans;
        ans.push_back(s[0]);
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                continue;
        }else{
            ans.push_back(s[i+1]);
        }
     }
        int l=ans.size();
        if(ans[0]=='1'){
            cout<<l<<endl;
        }else{
            cout<<l-1<<endl;
        }
      
    }

 return 0;
}