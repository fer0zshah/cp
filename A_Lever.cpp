#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int s=0;
    for(int i=0;i<n;i++){
        if(a[i]>b[i])s+=(a[i]-b[i]);
    }
    cout<<s+1<<endl;
 }
 return 0; }