#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        if(i==m)break;
        cout<<"OK"<<endl;
    }
    if(n-m>0){
        for(int i=0;i<n-m;i++){
            cout<<"Too Many Requests"<<endl;
        }
    }
 return 0; }