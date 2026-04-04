#include <bits/stdc++.h>
using namespace std;

void dividedDiffTable(vector<double> &x,
                      vector<vector<double>> &y, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            y[j][i] =
                (y[j + 1][i - 1] - y[j][i - 1]) /
                (x[j + i] - x[j]);
        }



 for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<setw(10)<<y[i][j]<<" ";
        }
        cout<<endl;
    }cout<<endl;

    }  

}

double applyFormula(double value,
                    vector<double> &x,
                    vector<vector<double>> &y, int n)
{
    double sum = y[0][0];
    double p=1;
    for (int i = 1; i < n; i++)
    {   
        p*=(value-x[i-1]);
        sum += p* y[0][i];
    }
    return sum;
}


void printDiffTable(vector<vector<double>> &y, int n)
{
    cout << fixed << setprecision(4);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << y[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int n = 4;

    vector<double> x = {5, 6, 9, 11};

    vector<vector<double>> y(n, vector<double>(n));

    y[0][0] = 12;
    y[1][0] = 13;
    y[2][0] = 14;
    y[3][0] = 16;

    dividedDiffTable(x, y, n);

    printDiffTable(y, n);

    double value = 7;
cout<<endl;
    cout << "Value at " << value << " is "
         << fixed << setprecision(2)
         << applyFormula(value, x, y, n) << endl;

    return 0;
}
