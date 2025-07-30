#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v;
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
    set<int>s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    int l=s.size();
    for(auto it:s){
        v.push_back(it);
    }
    int c=0;
    for(int i=0;i<l-1;i++){
        if(v[i]==v[i+1]-1){
            c++;i++;
        }
    }
   v.clear();
   s.clear();
    cout<<l-c<<endl;
}
 
 return 0;
}