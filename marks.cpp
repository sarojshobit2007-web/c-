#include <iostream>
using namespace std;

int main() {
    int age, marks;

    // Taking input from user
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    /* Logical AND (&&)
       Both conditions must be true */
    if (age >= 18 && marks >= 40) {
        cout << "Result using AND (&&): Eligible and Passed" << endl;
    } else {
        cout << "Result using AND (&&): Not eligible or Failed" << endl;
    }

    return 0;
}