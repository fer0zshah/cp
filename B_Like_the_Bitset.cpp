#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 int t;
 cin>>t;
 while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int c=0;
    int f=0;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            c++;
            if(c>=k){
                f=1;
                break;
            }
        }
        else c=0;
    }
    if(f)cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        int N=1;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                v[i]=N;
                N++;
            }
        }
          for(int i=0;i<n;i++){
            if(v[i]==0){
                v[i]=N;
                N++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";

        }cout<<endl;


    }
 }
 return 0; }