#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int K;
        if(n==2){
            cout<<-1<<endl;
            continue;
        }
        vector<vector<int>> v(n,vector<int>(n,0));
        if(n%2)K=n/2+1;
        else K=n/2;
        int k=1;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if((i+j)%2==0){
                        v[i][j]=k;
                        k++;
                    }
                }
            }
        
    
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if((i+j)%2){
                        v[i][j]=k;
                        k++;
                    }
                }
            }
    
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<v[i][j]<<" ";
            }cout<<endl;
        }
    }

}