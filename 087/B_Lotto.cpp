
#include<iostream>
#include<vector>

using namespace std;
typedef long long LL;
vector<vector<int>>ans;
fun(int i,vector<int>&sett,int x,vector<int>&v){
    if(i==sett.size()){
            ans.push_back(v);
        return 0;
    }
    int j=0;

    if(j<x){
        v.push_back(sett[j]);
        fun(i+1,sett,x++,v);
    }else {
        fun(i+1,sett,x,v);j=0;}
}
int main()
{
     int k;
        cin>>k;

             if(k){


        vector<int>sett(k);
        for(int i=0;i<k;i++){
            cin>>sett[i];
        }
        vector<int>v;
        fun(0,sett,6,v);

        for(int i=0;i<6;i++){
            for (int j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" " ;
            }cout<<endl;
        }cout<<endl;
        ans.clear();
}
    return 0;
}
//7 1 2 3 4 5 6 7
//8 1 2 3 5 8 13 21 34
//0

