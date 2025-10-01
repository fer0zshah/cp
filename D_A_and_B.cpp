#include <bits/stdc++.h>
using namespace std;

long long cost(vector<int>& pos) {
    int k=pos.size();
    if (k==0) return 0;
    int mid=k/2;
   long long cost=0;
    for (int i=0;i<k;i++) {
        cost+=abs(pos[i]-(pos[mid]-mid+i));
    }
    return cost;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
       vector<int>a,b;
        for (int i=0;i<n;i++) {
            if (s[i]=='a') a.push_back(i);
            else b.push_back(i);
        }
       long long ans=min(cost(a),cost(b));
        cout <<ans<<endl;
    }
    return 0;
}
