#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> v;
        if(k>n){
            cout<<"NO"<<endl;
            continue;
        }
        if (n % 2)
        {
            if (k % 2)
            {
                cout << "YES" << endl;
                for (int i = 0; i < k - 1; i++)
                {
                    v.push_back(1);
                }
                v.push_back(n - (k - 1));
                for (int i = 0; i < k; i++)
                    cout << v[i] << " ";
                cout << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
        {
            if(k%2){
                if(k>n/2){
                    cout<<"NO"<<endl;
                }else{
                    cout<<"YES"<<endl;
                    for(int i=0;i<k-1;i++){
                        v.push_back(2);
                    }
                    v.push_back(n-2*(k-1));
                    for (int i = 0; i < k; i++)
                    cout << v[i] << " ";
                    cout << endl;
                }
            }else{
                cout<<"YES"<<endl;
                    for(int i=0;i<k-1;i++){
                        v.push_back(1);
                    }
                    v.push_back(n-(k-1));
                    for (int i = 0; i < k; i++)
                    cout << v[i] << " ";
                    cout << endl;
            }
        }
    }
}