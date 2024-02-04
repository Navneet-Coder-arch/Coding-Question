#include <iostream>

using namespace std;

// function to find the gcd of a, b using euclid's algorithm
int gcd (int a, int b) {

    if (a == 0)
        return b;

    if (b == 0)
        return a;

    while (a != b) {

        if (a > b) {
            a -= b;
        }

        else {
            b -= a;
        }

    }

    return a;
}

int main() {
    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;

    cout << "GCD or HCF of " << a << ' ' << b << " - " << gcd(a, b) << endl;

    return 0;
}
