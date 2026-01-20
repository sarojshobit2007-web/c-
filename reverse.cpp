#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int reversedNumber = 0;

    while (n != 0) {
        int digit = n % 10;
        reversedNumber = reversedNumber * 10 + digit;
        n = n / 10;
    }

    cout << "Reversed number: " << reversedNumber << endl;
    return 0;
}