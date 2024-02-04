#include <iostream>
#include <vector>

using namespace std;

// counting the number of prime using seive of eratosthenes
int countPrimes (int n) {

    vector<bool> numsBool(n, true);
    int count = 0;

    numsBool[0] = numsBool[1] = false;

    for (int i = 2; i < n; i++) {

        if (numsBool[i]) {

            count++;

            for (int j = i; j < n; j += i) {

                numsBool[j] = false;

            }

        }

    }

    return count;

}

int main() {
  int range;
  cout << "Range: ";
  cin >> range;

  cout << "Count of prime numbers till " << range << " - " << countPrimes(range) << endl;

    return 0;
}
