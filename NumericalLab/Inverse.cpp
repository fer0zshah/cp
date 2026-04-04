#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
vector<vector<double>> get(vector<vector<double>> A, int r, int c)
{
    int n = A.size();
    vector<vector<double>> co;
    for (int i = 0; i < n; i++)
    {
        if (i == r)
            continue;
        vector<double> row;
        for (int j = 0; j < n; j++)
        {
            if (j == c)
                continue;
            row.push_back(A[i][j]);
        }
        co.push_back(row);
    }
    return co;
}
double Det(vector<vector<double>> A)
{
    int n = A.size();
    if (n == 1)
        return A[0][0];
    if (n == 2)
        return A[0][0] * A[1][1] - A[0][1] * A[1][0];
    double det = 0;
    int s = 1;
    for (int i = 0; i < n; i++)
    {
        det += s * (A[0][i] * Det(get(A, 0, i)));
        s *= -1;
    }
    return det;
}

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    if (!fin.is_open())
    {
        cerr << "Cannot open input file.\n";
        return 1;
    }
    while (true)
    {
        fout << "Enter the number of equations: ";
        int n;
        if (!(fin >> n))
            break;
        vector<vector<double>> A(n, vector<double>(n));
        vector<double> B(n);
        fout << "Enter the Augmented matrix: " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                fin >> A[i][j];
            }
            fin >> B[i];
        }
        double det = Det(A);
        if (!det)
        {
            fout << "Determinant: " << det;
            fout << "  So Non Inversible" << endl;
            continue;
        }
        else
        {
            fout << "Determinant: " << det;
            fout << "  So Inversible" << endl;
        }
        vector<vector<double>> Adj(n, vector<double>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int s;
                if ((i + j) % 2)
                    s = -1;
                else
                    s = 1;
                Adj[i][j] = s * (Det(get(A, i, j)));
                Adj[i][j] /= det;
            }
        }
        vector<vector<double>> t(n, vector<double>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                t[i][j] = Adj[j][i];
            }
        }
        fout<<"Adjoint Matrix :"<<endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                fout<<setw(6)<<t[i][j];
            }fout<<endl;
        }
        vector<double> ans(n);
        for (int i = 0; i < n; i++)
        {
            double sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += t[i][j] * B[j];
            }
            ans[i] = sum;
        }

        for (int i = 0; i < n; i++)
        {
            fout << ans[i] << " ";
        }
    }
    return 0;
}