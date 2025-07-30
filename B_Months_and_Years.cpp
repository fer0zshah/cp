#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>seq(n);
for(int i=0;i<n;i++){
    cin>>seq[i];
}
vector<int>temp={31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
    int k=0,j=0;
    bool f=false;
for(int i=0;i<60-n;i++){
       if(seq[0]==temp[i]) k=i;
       else continue;
       for( j=0;j<n;){
        // cout<<temp[k]<<" ";
            if(seq[j]==temp[k]){
                j++;
                k++;
                if(j==n) f=true;
            }else{
                j=0;
                break;
            }
       }
       if(f)break;
    }
    if(j==n)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
 
 return 0;
}