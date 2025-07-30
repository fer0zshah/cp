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
    LL n,k;
    cin>>n>>k;
    vector<LL>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>count={0};
    int c=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        if((v[i+1]-v[i])<=k){
            c++;
        }else{
            count.push_back(c+1);
            c=0;
        }
    }
    count.push_back(c+1);
    // for(int i=0;i<count.size();i++){
    //     cout<<count[i]<<" ";
    // }cout<<endl;
    int mx=*max_element(count.begin(),count.end());
    // cout<<mx<<endl;
    cout<<v.size()-mx<<endl;

}
 
 return 0;
}