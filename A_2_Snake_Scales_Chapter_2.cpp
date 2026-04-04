#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t=1;
// cin>>t;
int T=t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>sh;
    int mx =0;
    for(int i=n-2;i>=;i--){
        sh.push_back(abs(v[i]-v[i-1]));
        sh.push_back(abs(v[i]-v[i+1]));
        sh.push_back(abs(v[i+1]-v[i-1]));
        // sort(sh.begin(),sh.end());
        int mid=sh[1];
        cout<<i<<"->" ;
        for(int i=0;i<3;i++)cout<<sh[i]<<" ";
        cout<<endl;
        if(mx<mid)mx=mid;
    }
    cout<<mx<<endl;

}
 
 return 0; }