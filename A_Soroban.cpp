#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
LL n;
cin>>n;
if(n==0){cout<<"O-|-OOOO"<<endl;return 0;}
    string arr[10]={"O-|-OOOO","O-|O-OOO","O-|OO-OO","O-|OOO-O","O-|OOOO-","-O|-OOOO","-O|O-OOO","-O|OO-OO","-O|OOO-O","-O|OOOO-"};
    while(n){
        int d=n%10;
        n=n/10;
        cout<<arr[d]<<endl;
    }
 
 return 0;
}