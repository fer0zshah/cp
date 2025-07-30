#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define loop(i,a,b) for(int i=a;i<b;i++)
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<LL>v(n);
for(int i=0;i<n;i++){
   
  cin>>v[i];
}
if(n==1){
    cout<<1<<endl;
    return 0;
}
// bool flag=false;
vector<int>count;
int k=0;
for(int i=0;i<n-1;i++){
    if(v[i]<=v[i+1]){
        k++;
        count.push_back(k);
        // flag=true;
    }else{
        k=0;
        count.push_back(k);
        
    }
}

// for(int i=0;i<n;i++){
//     cout<<count[i]<<" ";
// }
int m=*max_element(count.begin(),count.end());
cout<<m+1<<endl;
 
 return 0;
}