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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[v[i]]++;
        }
        int c=0;
        vector<int>ans;
        for(auto it:m){
            ans.push_back(it.second);
            c++;
        }
        sort(ans.begin(),ans.end());
        if(c<=2){
            if(c==1){
                cout<<"Yes"<<endl;
                continue;
            }
          if(c==2&&ans[1]-ans[0]<=1){
            cout<<"Yes"<<endl;
          }else{
            cout<<"No"<<endl;
          }
        }else{
            cout<<"No"<<endl;
                }    
    }
 
 return 0;
}