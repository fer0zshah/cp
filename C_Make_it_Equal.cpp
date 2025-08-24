#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;

while(t--){
    LL n,k;
    cin>>n>>k;
    vector<LL>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<LL,int>b;
    for(int i=0;i<n;i++){
        LL B;
        cin>>B;
        b[B%k]++;
    }
    map<LL,LL>mp;
    bool u=0;
    for (int i=0;i<n;i++){               
                if (b[a[i]%k]) { 
                   b[a[i]%k]--;
                    mp[a[i]]=a[i]%k;
                }
            else if(b[k-(a[i]%k)]){
                    b[k-(a[i]%k)]--;
                    mp[a[i]]=k-(a[i]%k);
                }
                else { u=1; break;}
            
        }
        // for(auto it:mp){
        //     cout<<it.first<<" ->"<<it.second<<endl;
        // }
        // cout<<l<<endl;
        
        if(!u)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    

 
 return 0;
 }