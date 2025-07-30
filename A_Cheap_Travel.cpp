 #include<bits/stdc++.h>
 using namespace std;
 typedef long long LL;
  
 int main()
 {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n,m,a,b;
 cin>>n>>m>>a>>b;

 int sum1=0;
 int N=n;
    int t=n;
 while(n--){
    sum1+=a;
 }
 int sum2=0;
 int c=0;
 int M=m;
 while(m--&&t--&&c<N&&sum1>sum2){
    // if(){
    //     break;
    // }else{

        sum2+=b;
        // cout<<"ini sum2: "<<sum2<<endl;
        c+=M;
        // cout<<"value c: "<<c<<endl;
        if((N-c)*a<b)break;
       
    // }

 }
 int diff=N-c;
//  cout<<diff<<endl;
 while(diff>0){
    if(b<=a){
        sum2+=b;
        diff-=M;
    }else{
        sum2+=a;
        diff--;
    }
 }
 
//  cout<<sum1<<" "<<sum2<<endl;
 int mini=min({sum1,sum2});
 cout<<mini<<endl;
  
  return 0;
 }