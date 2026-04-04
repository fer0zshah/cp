#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    vector<int>v(n);
    int ev=0,od=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2)od++;
        else ev++;
    }

    if(od==1){
        for(int i=0;i<n;i++){
            if(v[i]%2){cout<<i+1<<endl;
            break;}
        }
    }else{
         for(int i=0;i<n;i++){
            if(v[i]%2==0){cout<<i+1<<endl;
            break;}
        }
    }


 
 return 0; }