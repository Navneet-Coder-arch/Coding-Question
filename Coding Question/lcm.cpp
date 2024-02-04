#include <iostream>
#include <cmath>

using namespace std;

//function to find the gcd of to numbers
int gcd (int a, int b) {

    if (a == 0) {
        return b;
    }

    if (b == 0) {
        return a;
    }

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

// function to find the lcm of two number using formula: hcf(a, b) * gcd(a, b) = a * b
int lcm (int a, int b) {
    int hcf = gcd(a, b);

    double lcm = (a * b) / hcf;

    return round(lcm);
}

int main() {
    int a, b;
    cout << "Enter to numbers: ";
    cin >> a >> b;

    cout << "LCM of " << a << ' ' << b << " - " << lcm(a, b) << endl;

    return 0;
}
