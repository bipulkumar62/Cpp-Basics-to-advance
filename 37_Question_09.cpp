// calculate nCr binomial coefficient for n and r

#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int ncr(int n, int r) {
    if (r < 0 || r > n) {
        return 0;
    }

    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);

    return fact_n / (fact_r * fact_nmr);
}

int main() {
    int n = 8;
    int r = 3;
    cout << "nCr = " << ncr(n, r) << endl;
    return 0;
}