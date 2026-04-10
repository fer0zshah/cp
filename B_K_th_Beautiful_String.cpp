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
    int i=1;
    while(i<k){
        k-=i;
        i++;
    }
    string s(n,'a');
    s[n-(i+1)]='b';
    s[n-k]='b';
    cout<<s<<endl;
}
 return 0; }