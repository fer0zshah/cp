#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
const double EPSILON = 0.001;

// Function to calculate f(x)
double ff(double x, vector<double>& co) {
    double ans = 0;
    int n = co.size() - 1; // Degree of polynomial
    for (int i = 0; i <= n; i++) {
        ans += co[i] * pow(x, n - i);
    }
    return ans;
}

// Function to calculate f'(x) (Derivative)
double df(double x, vector<double>& co) {
    double ans = 0;
    int n = co.size() - 1; // Degree
    
    // Loop runs up to < n because the derivative of the constant term (last term) is 0
    for (int i = 0; i < n; i++) {
        ans += co[i] * (n - i) * pow(x, n - i - 1);
    }
    return ans;
}

void Raphson(double x0, vector<double>& co) {
    double x1;
    double px1; // Previous x1
    double err;
    
    // Initial guess
    x1 = x0; 

    int max_iter = 100; // Safety break
    int iter = 0;

    do {
        px1 = x1;
        
        double f_val = ff(x1, co);
        double df_val = df(x1, co);

        // Safety check for division by zero (flat slope)
        if (abs(df_val) < 1e-9) {
            break; 
        }

        // Newton-Raphson Formula: x_new = x_old - f(x) / f'(x)
        x1 = px1 - (f_val / df_val);
        
        iter++;
    } while (abs(x1 - px1) > EPSILON && iter < max_iter);

    cout << "Root found: " << x1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int d;
    // cout << "Enter degree: ";
    if (!(cin >> d)) return 0;
    
    vector<double> co(d + 1);
    // cout << "Enter coefficients: ";
    for (int i = 0; i <= d; i++) {
        cin >> co[i];
    }

    // Print f(x)
    cout << "f(x) = ";
    for (int i = 0; i <= d; i++) {
        if (co[i] >= 0 && i != 0) cout << "+";
        cout << co[i] << "x^" << d - i;
    }
    cout << " = 0" << endl;

    // Print f'(x)
    cout << "f'(x) = ";
    for (int i = 0; i < d; i++) {
        if ((d - i) * co[i] >= 0 && i != 0) cout << "+";
        cout << (d - i) * co[i] << "x^" << d - i - 1;
    }
    cout << endl;

    vector<pair<double, double>> v;
    double step = 0.5;

    // Root finding loop
    // Start slightly offset (-10.01) to handle integer roots correctly
    for (double x = -10.01; x < 15; x += step) {
        double f1 = ff(x, co);
        double f2 = ff(x + step, co);
        
        if (f1 * f2 < 0) {
            v.push_back({x, x + step});
        }
    }

    int solno = v.size();
    if(solno == 0) cout << "No roots found in range." << endl;

    for (int i = 0; i < solno; i++) {
        // Use the midpoint of the interval as the initial guess
        double initial_guess = (v[i].first + v[i].second) / 2.0;
        Raphson(initial_guess, co);
    }

    return 0;
}