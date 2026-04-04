#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
// int bin(vector<int>&nxt,int l,int h,int key){
//     while(l<=h){
//         int mid=(l+h)/2;
//         if(nxt[mid]==key)return mid;
//         else if(nxt[mid]<key)l=mid+1;
//         else h=mid-1;
//         // mid=(l+h)/2;
//     }
//     return -1;
// }
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>pre(n),nxt(n);
    for(int i=0;i<n;i++)cin>>pre[i];
    for(int i=0;i<n;i++)cin>>nxt[i];
    int ind=0;
    for(int i=n;i>=0;i--){
        if(pre[i]!=nxt[i]){
            ind=i;
            break;
        }
    }
    // cout<<pre[0]<<endl;
    // int it=lower_bound(nxt.begin(),nxt.end(),pre[0])-nxt.begin()
    // int it=bin(nxt,0,n-1,pre[0]);
    int it=0;
    for(int i=0;i<n;i++){
        if(pre[ind]==nxt[i]){
            it=i;
            break;
        }
    }
     cout<<it<<endl;
}
 
 return 0; }