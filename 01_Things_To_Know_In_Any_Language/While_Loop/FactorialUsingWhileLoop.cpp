#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int factorial = 1;

    while (n > 0) {
        factorial *= n;
        n--;
    }
    cout << "Factorial of " << n << " is : " << factorial << endl;

    return 0;
}