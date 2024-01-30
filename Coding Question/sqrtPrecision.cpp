#include <iostream>

using namespace std;
typedef long long int lli;

// function to find the square root of a number O(log n)
lli sqrtInteger (int n) {

    int ans = 0;
    int start = 0, end = n;

    while (start <= end) {

        lli mid = (start + end) / 2;
        lli square = mid * mid;

        if (square == n) {
            ans = mid;
            return ans;
        }

        else if (square > n) {
            end = mid - 1;
        }

        else {
            ans = mid;
            start = mid + 1;
        }

    }

    return ans;
}

long double addPrecision (int tempSol, int n, int precision) {

    long double ans = tempSol;
    double presFactor = 1;

    for (int i = 0; i < precision; i++) {

        presFactor /= 10;

        for (long double j = ans; j * j < n; j += presFactor) {
            ans = j;
        }

    }

    return ans;
}

int main() {
    int n, p;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Enter the precision: ";
    cin >> p;

    int tempSol = sqrtInteger(n);

    cout << "Square root of " << n << ": " << addPrecision(tempSol, n, p) << endl;

    return 0;
}
