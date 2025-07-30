#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<string>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

map<string,int>m;
for(int i=0;i<n;i++){
   
    m[v[i]]++;
}
// for(auto it:m){
//     cout<<it.first<<" "<<it.second<<endl;
// }cout<<endl;
int maxVal=INT_MIN;
string maxkey;
for(auto it:m){
    if(it.second>maxVal){
        maxVal=it.second;
        maxkey=it.first;
    }
}
cout<<maxkey<<endl;
 return 0;
}