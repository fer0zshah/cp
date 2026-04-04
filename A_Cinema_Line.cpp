#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)cin>>v[i];
int tf=0,f=0,h=0;
for(int i=0;i<n;i++){
    if(v[i]==25)tf++;
    else if(v[i]==50){
        if(tf<=0){
            tf--;break;
        }
        f++;
        tf--;
    }else{
        if(f<=0&&tf<=0){
            tf--;f--;break;
        }
        if(f<=0)tf-=3;
        else {
            f--;
            tf--;
        } 
    }
}
if(tf<0)cout<<"NO"<<endl;
else cout<<"YES"<<endl;

 
 return 0; }