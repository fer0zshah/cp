#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
const double e = 1e-6; // Define error tolerance

// Renamed ff to f to match calls in main and secant
double f(double x, vector<double>& co) {
    int n = co.size() - 1;
    double ans = 0;
    for (int i = 0; i <= n; i++) {
        // Fixed power logic: it should be n-i, not n-i-1
        ans += co[i] * pow(x, n - i);
    }
    return ans;
}

void secant(double x0, double x, vector<double>& co) { // Pass vector by reference for speed
    double f_x0 = f(x0, co);
    double f_x = f(x, co);
    double c;
    // Check for division by zero
    if (abs(f_x - f_x0) < e) return;

    double xx ;
    double pxx; 

    do {
        pxx = x0 - f_x0 * (x - x0) / (f_x - f_x0);
        c=f(x0,co)*f(xx,co);
 
        f_x0 = f(x0, co);
        f_x = f(x, co);
        
        // Safety check to prevent division by zero
        // if(abs(f_x - f_x0) < 1e-9) break; 
          if (c == 0)
                break;
        
        x0 = x;
        x = xx;
        xx = x0 - f_x0 * (x - x0) / (f_x - f_x0);
        cout<<pxx<<" "<<xx<<endl;
    } while (abs(pxx - xx) > e);
    
    cout << "Root found: " << x << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int n;
    // cout << "Enter degree of polynomial: ";
    cin >> n;
    
    vector<double> co(n + 1);
    // cout << "Enter coefficients: ";
    for (int i = 0; i <= n; i++) {
        cin >> co[i];
    }

    // Display Equation
    cout << "Equation: ";
    for (int i = 0; i <= n; i++) {
        if (co[i] >= 0 && i != 0) cout << "+";
        cout << co[i] << "x^" << n - i;
    }
    cout << " = 0" << endl;

    vector<pair<double, double>> v;
    
    // Step size for searching
    double step = .5; 

    for (double x = -10.01; x < 15; x += step) {
        double f1 = f(x, co);
        double f2 = f(x + step, co); // Check f(x) and f(x+step)
        
        if (f1 * f2 < 0) {
            v.push_back({x, x + step});
        }
    }

    int solno = v.size();
    if(solno == 0) {
        cout << "No roots found in the range [-10, 15]" << endl;
    }

    for (int i = 0; i < solno; i++) {
        secant(v[i].first, v[i].second, co);
    }

    return 0;
}