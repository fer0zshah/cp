#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int total=0;
    for(int i=0;i<n;i++){
        total+=v[i];
    }
    // cout<<total<<endl;
    sort(v.begin(),v.end(),greater<int>());
    int sum=0;
    int count=0;
    int i=0;
    while(sum<=(total/2)){
        ++count;

        sum+=v[i];
        i++;
        // cout<<sum<<" ";
    }
    cout<<count<<endl;

}