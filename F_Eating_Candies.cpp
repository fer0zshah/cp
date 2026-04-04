#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int binarySearch(vector<int>& rev, int target) {
    int low = 0, high = rev.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; 

        if (rev[mid] == target) 
            return mid; 

        else if (rev[mid] < target) 
        high = mid - 1;   
        else 
        low = mid + 1; 
    }
    return -1;
}
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t=1;
// cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>ps(n);
    // set<int>s;
    ps[0]=v[0];
    for(int i=1;i<n;i++){
        ps[i]=ps[i-1]+v[i];
        // s.insert(ps[i]);
    }
    vector<int>rev(n);
    set<int>ss;
    reverse(v.begin(),v.end());
    rev[0]=v[0];
    ss.insert(rev[0]);
    for(int i=1;i<n;i++){
        rev[i]=rev[i-1]+v[i];
        ss.insert(rev[i]);
    } 
    
    reverse(rev.begin(),rev.end());
    // for(auto it:ss)cout<<it<<" ";
    // cout<<endl;
    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++){
        if(ss.count(ps[i])){
            int j=binarySearch(rev,ps[i]);
            // cout<<i<<" "<<j<<endl;
            vp.push_back({i,j});
        }
    }
    for(int i=0;i<n;i++)cout<<ps[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)cout<<rev[i]<<" ";
    cout<<endl;
    for(int i=0;i<vp.size();i++) cout<<vp[i].first<<" "<<vp[i].second<<endl;
    // int mx=0,c=0;
int mx = 0;
for(auto it : vp) {
    int i = it.first, j = it.second;
    if(i < j) { 
        int total = (i + 1) + (n - j);
        mx = max(mx, total);
    }
}
cout << mx << endl;

// cout<<mx<<endl;
}
 
 return 0; }