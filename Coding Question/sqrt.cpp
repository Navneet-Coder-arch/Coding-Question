#include <iostream>

/* int this code we have find the square root of a number
   using binary search me time complexity O(log n)
   with no decimal places or precision 
   (if you want that find the sqrt of a number with dicmal places goto file 'sqrtPrecision.cpp' in folder Coding Question on git hub) 
*/

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

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Square root of " << n << ": " << sqrtInteger(n) << endl;  

    return 0;
}
