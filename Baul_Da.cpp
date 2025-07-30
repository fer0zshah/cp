#include <iostream>

using namespace std;

long long int binsr(long long int a[],long long int n, long long int x)
{
    long long int st,en,mid;
    st=0;
    en=n-1;
    if(x>=a[en])
        return n;
    if(x<a[st])
        return 0;
    while(st<=en)
    {
        mid=(st+en)/2;
        if(a[mid]<=x&&x<a[mid+1])
        {
            return mid+1;
        }
        else if(x>=a[mid])
        {
            st=mid+1;
        }
        else
        {
            en=mid-1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,n,k,i,j,m;

    cin >> n ;

    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i] ;
    }
    cin >> k ;
    for(i=0;i<k;i++)
    {
        cin >> m ;
        cout << binsr(a,n,m) << "\n" ;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
