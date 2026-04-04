#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int fm(vector<int>&v,int h){
    int mx=0;
    int l=0;
    if(h==1){
        mx=max(v[l],v[h]);
    }else{
        l=h-2;
        while (l<=h)
        {
            if(mx<v[l])mx=v[l];
            l++;
        }
    }
    
    return mx;

}
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 int t=1;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];

    int ans=0;
    vector<int>dup(n);
    for(int i=0;i<n;i++){
        if(i%2){
            v[i]=fm(v,i);
        }
        
    }
    //      for(int i=0;i<n;i++)
    //    cout<<v[i]<<" ";
    //    cout<<endl;
    dup=v;
      for(int i=0;i<n;i++){
        if(i&1){
            // v[i]=fm(v,i);
            if(v[i-1]>=v[i]){
                ans+=(v[i-1]-v[i]+1);
                v[i-1]=(v[i]-1);
                // cout<<i<<" "<<v[i-1]<<"\n";

            }
           if(i<n-1&&v[i+1]>=v[i]){
             ans+=(v[i+1]-v[i]+1);
                v[i+1]=(v[i]-1);
               
            }
            // cout<<i<<"->"<<v[i]<<" "<<ans<<endl;
            // <<ans<<endl;
        }
        
    }
   
    cout<<ans<<endl;
 }
 return 0; }