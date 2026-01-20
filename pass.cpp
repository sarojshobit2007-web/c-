#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 40) {
        cout << "AND condition is true" << endl;
        cout << "Student is PASS" << endl;
    } else {
        cout << "AND condition is false" << endl;
        cout << "Student is FAIL" << endl;
    }

    return 0;
}
