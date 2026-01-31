#include <iostream>
using namespace std;


unsigned long long factorial(int n) {
    unsigned long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Error! Factorial of a negative number doesn't exist." << endl;
    } else {
        cout << "Factorial of " << n << " = " << factorial(n) << endl;
    }

    return 0;
}