#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int p=1;
    int c=0;
    while(p<=n){
        p*=2;
        c++;
    }
    cout<<c<<endl;

 return 0; }