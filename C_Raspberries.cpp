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
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int diff=0,f=0,c=0;
    vector<int>d;
    for(int i=0;i<n;i++){
        if(v[i]>k){
            if(v[i]%k==0){
                diff=0;
            }else{
                f=v[i]/k+1;
                diff=f*k-v[i];
            }
        }else{
            diff=k-v[i];
        }
        d.push_back(diff);
        if(k==4&&v[i]%2==0){
            c++;
        }
    }

    if(k==4){
        d.push_back(max(0,2-c));
    }
    // for(int i=0;i<d.size();i++){
    //     cout<<d[i]<<" ";
    // }cout<<endl;
    int mn=*min_element(d.begin(),d.end());
    cout<<mn<<endl;
}
 
 return 0;
}